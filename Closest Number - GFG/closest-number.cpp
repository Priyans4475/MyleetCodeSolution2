//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int closestNumber(int N , int M) {
        // code here
       float x= (float)N/(float)M;
        int y=round(x);
        int ans=0;
       if(N>0) ans= y*M;
       else
       ans=(y)*M;
       
    //   cout<<x<<" "<<y<<" "<<ans;
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.closestNumber(N,M) << endl;
    }
    return 0;
}
// } Driver Code Ends