//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	      
         int sum=0;

       for(int i=0;i<n;i++)
       {
           sum+=arr[i];
       }
         int sum1=sum;


        // vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
         vector<vector<bool>>dp(n,vector<bool>(sum1+1,0));
         for(int i=0;i<n;i++)
         {
             dp[i][0]=true;
         }
           if(arr[0]<=sum1)
            dp[0][arr[0]]=true;
         
         for(int i=1;i<n;i++)
         {
             for(int j=1;j<=sum1;j++)
             {
                  int notTake=dp[i-1][j];
                 int take=0;
                if(arr[i]<=j)
                {
                    take=dp[i-1][j-arr[i]];
                }
                 dp[i][j]= take || notTake;
            }
        }

                int mini=1e9;
                for(int s1=0;s1<=sum/2;s1++)
                {
                    if(dp[n-1][s1]==true)
                    {
                        mini=min(mini,abs((sum-s1)-s1));
                    }
                }  

                return mini;  
        
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
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends