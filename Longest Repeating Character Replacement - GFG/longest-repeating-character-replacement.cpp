//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int characterReplacement(string s, int k) {
        // code here
        int n=s.length();
        int res=0;
        int i=0;
        int j=0;
        int maxfreq=0;
        unordered_map<char,int>mp;
        for(int j=0;j<n;j++)
        {
            mp[s[j]]++;
            maxfreq=max(maxfreq, mp[s[j]]);
            

            if((j-i+1)-maxfreq >k)
            {
                mp[s[i]]--;
                i++;
            }

            res=max(res,j-i+1);
        }
       
      return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;

        Solution obj;
        cout << obj.characterReplacement(S, K) << endl;
    }
    return 0;
}
// } Driver Code Ends