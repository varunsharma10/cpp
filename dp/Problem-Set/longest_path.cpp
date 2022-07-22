#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100005;
vector<ll>adj[N];
ll dp[N];
ll n;
ll m;
ll dfs(ll i)
{
    if(dp[i] != -1)
        return dp[i];

    bool leaf = 1;
    ll ans = 0;
    for(auto it : adj[i])
    {
        leaf = 0;
        ans = max(ans , dfs(it));
    }
    if(leaf == 1)
        return dp[i] = 0;
    else
        return dp[i] = ans + 1;

}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        a--;
        b--;
        adj[a].push_back(b);
    }
    memset(dp , -1 ,sizeof(dp));
    ll ans = 0;
    for(int i=0;i<n;i++)
    {
        ans = max(ans ,dfs(i));
    }
    cout<<ans<<endl;
}