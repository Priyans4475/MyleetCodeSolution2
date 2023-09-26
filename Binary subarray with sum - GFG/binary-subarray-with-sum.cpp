//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
 
    int numberOfSubarrays(vector<int>& nums, int n, int goal){
        // code here
       int ans=0;
       int sum=0;
       unordered_map<int,int>mp;
       int i=0;
       while(i<n)
       {
           sum+=nums[i];
           if(sum==goal)
           ans++;
           
           if(mp.find(sum-goal)!=mp.end())
           {
               ans+=mp[sum-goal];
               
           }
           
           mp[sum]++;
           i++;
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
        int N;
        cin >> N;
        int target; 
        cin >> target;
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin >> arr[i];
        Solution obj;
        cout<<obj.numberOfSubarrays(arr, N, target)<<endl;
    }
    return 0;
}
// } Driver Code Ends