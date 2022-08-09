#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
const int N = 200005;
ll n;
vector<ll>arr;
ll ans;
vector<pair<ll,ll>>adj[N];
vector<ll>sizee(N);
void dfs1(ll i , ll par)
{
    for(auto it : adj[i])
    {
        if(it.first != par)
        {
            dfs1(it.first , i);
            sizee[i] += sizee[it.first];
        }
    }
    sizee[i]++;
}
void dfs2(ll i , ll par , ll threshold)
{
    threshold = min(threshold , arr[i]);
    for(auto it : adj[i])
    {
        if(it.first!= par)
        {
            if(it.second > threshold)
            {
                ans += sizee[it.first];
                continue;
            }
            else
            {
                dfs2(it.first , i , threshold - it.second);
            }
        }
    }
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll tmp;
        cin>>tmp;
        arr.push_back(tmp);
    }
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        int w;
        cin>>u>>v>>w;
        // cout<<u<<" "<<v<<" "<<w<<endl;
        u--;
        v--;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    dfs1(0 , -1);
    dfs2(1, 0 , INT_MAX);
    cout<<ans<<endl;


}