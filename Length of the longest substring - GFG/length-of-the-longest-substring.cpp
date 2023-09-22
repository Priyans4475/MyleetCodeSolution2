//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        int cnt[26]={0};
          int left=0,right=0,ans=0;
          while(right<s.size())
          {
              if(cnt[s[right]-'a']==0)
              {
                  cnt[s[right]-'a']++;
                  right++;
              }
              else
              {
                  while(cnt[s[right]-'a']!=0)
                  {
                      cnt[s[left]-'a']--;
                      left++;
                  }
              }
              ans=max(ans,right-left);
          }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends