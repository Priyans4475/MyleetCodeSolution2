//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int f(int i,int W,int val[],int wt[],vector<vector<int>>&dp,int n)
    {
        if(i==n)
        return 0;
        
        
        if(dp[i][W]!=-1)
        return dp[i][W];
        
        int nottake=f(i+1,W,val,wt,dp,n);
        int take=INT_MIN;
        if(wt[i]>W)
        return nottake;
        
            take=val[i]+f(i,W-wt[i],val,wt,dp,n);
        
        
        return dp[i][W]=max(take,nottake);
    }
    int knapSack(int n, int W, int val[], int wt[])
    {
        // code here
          vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
        return f(0,W,val,wt,dp,n);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends