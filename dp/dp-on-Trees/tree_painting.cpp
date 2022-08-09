#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
const int N = 200005;
ll n;
ll ans;
vector<ll>sizee(N);
vector<ll>dp(N);
vector<ll>adj[N];
void dfs1(ll i , ll par)
{
    for(auto it : adj[i])
    {
        if(it != par)
        {
            dfs1(it , i);
            sizee[i] += sizee[it];
            dp[i] += dp[it];
        }
    }
    sizee[i]++;
    dp[i] += sizee[i];
}
void dfs2(ll i ,ll par , ll upper_dp)
{
    ans = max(ans , dp[i] + upper_dp + n-sizee[i]);
    for(auto it : adj[i])
    {
        if(it != par)
        {
            dfs2(it , i , upper_dp + dp[i] - sizee[it] - dp[it] + (n-sizee[i]));
        }
    }
}
int main()
{
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs1(1 , 0);
    dfs2(1, 0 , 0);
    cout<<ans<<endl;


}