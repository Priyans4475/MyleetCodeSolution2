//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& arr, int n) {
        // Your code goes here
   /*
    //   calculate the sum of all elements of array
    int sum=0;
    
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
    }
    // totalsum of all elements upto 1 to n
    int x=(n*(n+1))/2;
    
    
    // totalsum -original sum of that array=missing number
    int ans=x-sum; 
    
    return ans;*/
    int x=0;
    for(int i=0;i<arr.size();i++)
    {
        x^=arr[i];
    }
    
    for(int i=1;i<=n;i++)
    {
        x^=i;
    }
    int ans=0;
    
        return x; 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends