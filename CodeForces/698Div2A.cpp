#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int ans=0;
    unordered_map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        mp[x]++;
        ans=max(ans,mp[x]);
    
    }
   
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
