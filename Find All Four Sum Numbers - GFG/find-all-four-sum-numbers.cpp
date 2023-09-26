//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int k) {
        // Your code goes here
        
         vector<vector<int>>ans1;
        set<vector<int>>ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
        for(int j=i+1;j<nums.size();j++)
                
        {int x=j+1;
        int l=nums.size()-1;
            while(x<l)
            {   
            int sum=nums[i]+nums[j]+nums[x]+nums[l];
                  if(sum==k)
                       {
                        ans.insert({nums[i],nums[j],nums[x],nums[l]});
                            
                           x++;
                           l--;
                       }
                       else if(sum>k)
                       l--;
                       else
                       x++;
                      

            }
        }}
        for(auto i :ans)
        {
            ans1.push_back(i);
        }
        return ans1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends