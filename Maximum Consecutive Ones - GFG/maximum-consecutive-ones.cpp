//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestOnes(int n, vector<int>& nums, int k) {
        // Code here
         
        int res=0;
        int i=0;
        int j=0;
        int maxfreq=0;
        unordered_map<int,int>mp;
        for(int j=0;j<n;j++)
        {   if(nums[j]==1)
           { mp[nums[j]]++;
            maxfreq=max(maxfreq, mp[nums[j]]);}
            

            if((j-i+1)-maxfreq>k)
            {
                mp[nums[i]]--;
                i++;
            }

            res=max(res,j-i+1);
        }
       
      return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.longestOnes(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends