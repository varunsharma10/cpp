#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
const int N = 20005;
ll n;
ll dp[N][4];
vector<int>adj[N];
int dfs(int i , int par , int curr)
{
    if(i == n)
        return (curr == 0);
    
    if(dp[i][curr] != -1)
        return dp[i][curr];
    
    ll ans = 0;
    int count = 0;
    for(int k=0;k<=3;k++)
    {
        ll res = 1;
        for(auto it : adj[i])
        {
            if(it != par)
            {
                count++;
                res = (res*1LL*dfs(it , i , k^curr))%mod;
            }
        }
        ans = (ans + res)%mod;
    }
    if(count == 0)
    {
        ll ans = 0;
        for(int k=0;k<=3;k++)
        {
            ans = (ans + dfs(n , i , curr^k));
        }
        return dp[i][curr] = ans;
    }
    return dp[i][curr] = ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n-2;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        memset(dp , -1 ,sizeof(dp));
        ll ans = 4LL*dfs(1 , 0 , 0)%mod;
        cout<<ans<<endl;
        for(int i=0;i<n-1;i++)
        {
            adj[i].clear();
        }
    }
}