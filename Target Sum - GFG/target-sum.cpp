//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
   int const mod=1e9+7;
    int helper(vector<int>& arr,int idx,int sum,vector<vector<int>>&dp){
        if(idx==0){
            if(arr[0]==0 && sum==0)return 2;
            if(sum==0 || arr[0]==sum)return 1;
            return 0;
        }
       
        if(dp[idx][sum]!=-1)return dp[idx][sum];
        int notpick=helper(arr,idx-1,sum,dp);
        int pick=0;
        if(arr[idx]<=sum)
        pick=helper(arr,idx-1,sum-arr[idx],dp);
        return dp[idx][sum]=(pick+notpick)%mod;
    }
    int findTargetSumWays(vector<int>&arr ,int d) {
        //Your code here
          int totalsum=0;
          int n=arr.size();
        for(auto x:arr)totalsum+=x;
        if(totalsum-d<0)return 0;
        if((totalsum-d)%2==1)return 0;
        int s2=(totalsum-d)/2;
        vector<vector<int>>dp(n,vector<int>(s2+1,-1));
        return helper(arr,n-1,s2,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends