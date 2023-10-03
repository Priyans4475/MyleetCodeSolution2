//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        unordered_map<char,int>mp;
        int ans=0;
        mp.insert({'I',1});
          mp.insert({'V',5});
            mp.insert({'X',10});
             mp.insert({'C',100});
              mp.insert({'L',50});  
              mp.insert({'D',500});
                mp.insert({'M',1000});
                ans=mp[s[s.length()-1]];
                for(int i=s.length()-2;i>=0;i--)
                {  if(mp[s[i]]<mp[s[i+1]])
                    ans-=mp[s[i]];
                    else
                    ans+=mp[s[i]];
                    
                }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends