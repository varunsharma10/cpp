#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
map<pair<int,int> ,int>ans;
void dfs(int idx , int val , vector<int> adj[], vector<int>&vis)
{
    vis[idx] = true;
    for(auto it : adj[idx])
    {
        if(vis[it] == true)
            continue;

        ans[{min(idx , it) , max(idx , it)}] = val;
        dfs(it , 7-val , adj , vis);
    }
    return;
}
void solve()
{    
    int n;
    cin>>n;
    vector<int>degree(n+1 , 0);  
    vector<int>adj[n+1];  
    vector<int>vis(n+1 , false);
    vector<pair<int,int>>tmp;
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        int mini = min(u,v);
        int maxx = max(u,v);
        tmp.push_back({mini , maxx});
        adj[u].push_back(v);
        adj[v].push_back(u);
        degree[u]++;
        degree[v]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(degree[i] > 2)
        {
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(degree[i] == 1)
        {
            dfs(i , 2 , adj,vis);
            break;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        cout<< ans[tmp[i]]<<" ";
    }
    cout<<endl;

}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}