#include<bits/stdc++.h>
using namespace std;
vector<int>max_depth;
int ans = 0;
void dfs(vector<int>adj[] , int i , int par , int size)
{
    priority_queue<int>q;
    int mx = 0;
    for(auto it : adj[i])
    {
        if(it != par)
        {
            dfs(adj , it , i , size);
            q.push(max_depth[it] + 1);
            mx = max(mx , max_depth[it] + 1);
        }
    }
    max_depth[i] = mx;
    int dia = 0;
    if(q.size())
    {
        dia += q.top();
        q.pop();
    }
    if(q.size())
    {
        dia += q.top();
        q.pop();
    }
    ans = max(ans , dia);
}
int main()
{
    int n;
    cin>>n;
    vector<int>adj[n+1];
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    max_depth.resize(n , 0);
    dfs(adj , 1 , 0 , n);
    cout<<ans<<endl;
}