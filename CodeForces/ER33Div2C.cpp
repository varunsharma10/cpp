#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

const int MAXN = 120000;
ll ans;
int vis[MAXN];
ll arr[MAXN];
vector<int>adj[MAXN];
void dfs(int v)
{
    vis[v] = 1;
    ans = min(ans,arr[v]);
    for(auto u : adj[v])
    {
        if(!vis[u])
        {
            dfs(u);
        }
    }
}
void solve()
{    
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        --a,--b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    ll final = 0;
    for(int i=0;i<n;i++)
    {   
        if(vis[i])
        {
            continue;
        }
        ans = 1e9 + 10;
        dfs(i);
        final+=ans;
    }
    cout<<final<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}