#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
const int N = 200005;
ll n;
vector<ll>adj[N];
vector<ll>color(N);
ll dp[N+1][2];
void EE(ll a, ll b, ll& x, ll& y)
{
    if(a%b == 0)
    {
        x = 0;
        y=1; 
        return;
    }
    EE(b,a%b,x,y);
    ll temp = x;
    x = y;
    y= temp - y*(a/b);
}
ll inverse(ll a, ll m)
{
    ll x,y; 
    EE(a,m,x,y);
    if (x<0) x += m; 

    return x;
}
void dfs(ll i , ll par)
{
    ll tot = 1;
    for(auto it : adj[i])
    {
        if(it != par)
        {
            dfs(it , i);
            tot = (tot * (dp[it][0] + dp[it][1]))%mod;
        }
    }
    if(color[i] == 1)
    {
        dp[i][0] = 0;
        dp[i][1] = tot;
    }
    else if(color[i] == 0)
    {
        dp[i][0] = tot;
        ll vl = 0;
        for(auto it : adj[i])
        {
            if(it != par)
            {
                vl += (((tot*inverse(dp[it][0] + dp[it][1] , mod))%mod)*dp[it][1])%mod;
                vl %= mod;
            }
        }
        dp[i][1] = vl;
    }
}
int main()
{
    cin>>n;
    for(int i=0;i<=n-2;i++)
    {
        ll a;
        cin>>a;
        adj[a].push_back(i+1);
        adj[i+1].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        cin>>color[i];
    }
    dfs(0 , -1);
    cout<<dp[0][1]<<endl;



}