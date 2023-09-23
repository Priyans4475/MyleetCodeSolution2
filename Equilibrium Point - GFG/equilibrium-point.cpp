//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        // Approach 1
         
        //     long long sum=0, s1=0;
        // int eq=1;
        // if(n==1) 
        // return 1;
        // for(int i=0;i<n;i++)
        // {
        //     sum+=a[i];
        // }
        // for(int j=0;j<eq;j++)
        // {
        //     s1+=a[j];
        //     if((sum-a[eq])%2==0 && s1==((sum-a[eq])/2)) 
        //     return eq+1;
        //     else if(eq<n) 
        //     eq++;
        // }
        // return -1;
        
        // Approach 2 **********************************************************
        
        // int low=0;
        // int high=n-1;
        // while(low<=high)
        // {
        //     long long  mid=(low+high)/2;
        //     long long left=0;
        //     long long right=0;
        //     for(int i=0;i<mid;i++)
        //     {
        //         left+=a[i];
        //     }
            
        //       for(int i=mid+1;i<n;i++)
        //     {
        //         right+=a[i];
        //     }
            
        //     if(left==right)
        //     return mid+1;
            
        //     else if(left<right)
        //     low=mid+1;
        //     else
        //     high=mid-1;
            
        // }
        // return -1;
        
        
        // Approach 3 ****************************************************************
        
        long long leftsum=0;
        long long sum=0;
       
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        
        for(int i=0;i<n;i++)
        {
            long long rightsum=sum-leftsum-a[i];
            if(leftsum==rightsum)
            return i+1;
            
            leftsum+=a[i];
        }
        return -1;
        
        
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends