#include<bits/stdc++.h>
using namespace std;
vector<int>max_depth;
int ans = 0;
vector<int>w,p;
vector<int>maxx,minn;
void dfs(vector<int>adj[] , int i , int par , int size)
{
    for(auto it : adj[i])
    {
        if(it != par)
        {
            dfs(adj , it , i , size);
            maxx[i] = max(maxx[i] , maxx[it]);
            minn[i] = min(minn[i] , minn[it]);
            
        }
    }
    maxx[i] = max(maxx[i] , w[i]);
    minn[i] = min(minn[i] , w[i]);
    ans = max(ans , abs(w[i] - maxx[i]));
    ans = max(ans , abs(w[i] - minn[i]));

    
}
int main()
{
    int n;
    cin>>n;
    vector<int>adj[n+1];
    int root = 0;
    maxx.resize(n+1 , INT_MIN);
    minn.resize(n+1 , INT_MAX);
    w.resize(n+1 , 0);
    p.resize(n+1 , 0);

    for(int i=1;i<=n;i++)
    {
        cin>>w[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
        if(p[i] == -1)
        {
            root = i;
        }
        else
        {
            adj[p[i]].push_back(i);
        }
    }
    dfs(adj , root , 0 , n);
    cout<<ans<<endl;
}