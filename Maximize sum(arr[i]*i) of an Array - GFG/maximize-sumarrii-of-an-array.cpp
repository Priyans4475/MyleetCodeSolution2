//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        long sum=0;
        int m=1e9+7;
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            sum=((sum%m)+((long)a[i]%m*i%m)%m)%m;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends