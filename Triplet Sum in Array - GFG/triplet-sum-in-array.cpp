//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int nums[], int n, int X)
    {
        //Your Code Here
        //  vector<vector<int>>ans1;
        // set<vector<int>>ans;
        sort(nums,nums+n);
        
        for(int i=0;i<n;i++)
        {int j=i+1;
        int k=n-1;
            while(j<k)
            {  
            int sum=nums[i]+nums[j]+nums[k];
                  if(sum==X)
                       {
                           return 1;
                        // ans.insert({nums[i],nums[j],nums[k]});
                            
                        //   j++;
                        //   k--;
                       }
                       else if(sum>X)
                       k--;
                       else
                       j++;
                      

            }
        }
       return 0;
        
       
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends