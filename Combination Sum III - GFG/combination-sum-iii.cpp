//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void recurr(int k, int target,int start,vector<vector<int>>&ans,vector<int>&temp){
        if(target==0 && k==0)
        {
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<=9;i++)
        {  temp.push_back(i);
           recurr(k-1,target-i,i+1,ans,temp);
           temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(int k, int n) {
        // code here
         vector<vector<int>>ans;
        vector<int>temp;
        recurr(k,n,1,ans,temp);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends