#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,k;
    cin>>n>>k;
    vector<int> graph[n];
    vector<int> size(n,0);
    for(int i=0; i<n-1; i++) 
    {
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
        size[u]++;
        size[v]++;
    }
    queue<int> q;
    vector<int>vis(n,-1);
    for(int i=0; i<n; i++) 
    {
        if(size[i] == 0 || size[i] == 1) 
        {
            vis[i]=1;
            q.push(i);
        }
    }
    int ans = n;
    while(ans>0 && k>0) 
    {
        queue<int> tmp;
        while(!q.empty()) 
        {
            ans--;
            int v = q.front();
            q.pop();
            for(auto u : graph[v]) 
            {
                size[u]--;
                if((size[u] == 0 && vis[u] == -1) || size[u] == 1 ) 
                {
                    vis[u]=1;
                    tmp.push(u);
                }
            }
        }
        k--;
        q = tmp;
    }
    cout<<ans<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}