//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubstring(string s) {
        // Code here
        unordered_map<char,int>mp;
        int i=0,j=0,cnt=0;
        int last=s.size()-1;
        while(i!=s.size()){
            mp[s[i]]++;
            while(mp['a'] && mp['b'] && mp['c'])
           { cnt+= 1+(last-i);
            mp[s[j]]--;
            j++;
               
           }
            i++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        cout << obj.countSubstring(s) << endl;
    }
    return 0;
}
// } Driver Code Ends