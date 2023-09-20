//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int f(int i,int price[],int N, vector<vector<int>>&dp)
    {
        if(i==0)
        {
            return N*price[i];
        }
        if(dp[i][N]!=-1)
        return dp[i][N];
        int nottake=f(i-1,price,N,dp);
        int take=INT_MIN;
        int rodlen=i+1;
        if(rodlen<=N)
        {
            take=price[i]+f(i,price,N-rodlen,dp);
        }
        
        return dp[i][N]=max(take,nottake);
    }
    int cutRod(int price[], int N) {
        //code here
        vector<vector<int>>dp(N,vector<int>(N+1,-1));
        return f(N-1,price,N,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends