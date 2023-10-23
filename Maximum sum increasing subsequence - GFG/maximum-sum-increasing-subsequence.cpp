//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		private:
		int fun(int ind,int prev_ind,int arr[],int n,int sum, vector<vector<int>>&dp)
		{
		    if(ind==n)
		    {
		       return 0;
		    }
		    
		    if(dp[ind][prev_ind+1]!=-1)
		    return dp[ind][prev_ind+1];
		    
		    sum=0+fun(ind+1,prev_ind,arr,n,sum,dp);
		    
		    if(prev_ind==-1 || arr[ind]>arr[prev_ind])
		    {
		        sum=max(sum,arr[ind]+fun(ind+1,ind,arr,n,sum,dp));
		     
		    }
		    
		    return dp[ind][prev_ind+1]=sum;
		}

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	     int sum=0;
	   // vector<vector<int>>dp(n,vector<int>(n+1,-1));
	     vector<vector<int>>dp(n+1,vector<int>(n+1,0));
	   for(int ind=n-1;ind>=0;ind--)
	   {
	       for(int prev_ind=ind-1;prev_ind>=-1;prev_ind--)
	       {
	            sum=0+dp[ind+1][prev_ind+1];
		    
		    if(prev_ind==-1 || arr[ind]>arr[prev_ind])
		    {
		        sum=max(sum,arr[ind]+dp[ind+1][ind+1]);
		     
		    }
		    
		    dp[ind][prev_ind+1]=sum;
	       }
	   }
	    return dp[0][0];
	     
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends