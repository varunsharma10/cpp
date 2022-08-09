#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
const int N = 200005;
ll n,k;
ll arr[N];
ll ans;
vector<ll>adj[N];
ll dp[N][105];
void dfs(ll i , ll par)
{
    ll temp[105];
    ll memo[105];
    memset(temp , 0 , sizeof(temp));
    memset(memo , 0 , sizeof(memo));

    memo[arr[i]] = 1;
    for(auto it : adj[i])
    {
        if(it!=par)
        {
            dfs(it , i);
            for(int j=0;j<=k;j++)
            {
                for(int l=0;l<=k;l++)
                {
                    if(j + l <= k)
                    {
                        temp[j+l] = (temp[j+l] + memo[j]*dp[it][l])%mod;
                    }
                }
            }
            for(int j=0;j<=k;j++)
            {
                memo[j] = temp[j];
                temp[j] = 0;
            }
        }
    }
    for(int j=0;j<=k;j++)
    {
        dp[i][j] = memo[j];
    }
    dp[i][0] = (dp[i][0] + 1)%mod;

    ans = (ans + dp[i][k] - (k==0) + mod) %mod;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ans = 0;
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n-1;i++)
        {
            ll a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        dfs(1 , 0);
        cout<<ans<<endl;
        for(int i=1;i<=n;i++)
        {
            adj[i].clear();
        }
    }
}