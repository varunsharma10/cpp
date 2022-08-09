#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
class dsu
{ 
    public:
    vector<int>par;
 
    dsu(int n)
    {
        par.resize(n+1);
        for(int i=0; i<=n; i++)
        {
        par[i]=i;
        }
    }
 
    int parent(int x)
    {
        if(x==par[x])
        {
        return x;
        }
 
        return par[x]=parent(par[x]);
    }
 
    void un(int x,int y)
    {
        int sp_x=parent(x);
        int sp_y=parent(y);
        if(sp_x!=sp_y)
        {
        par[sp_x]=sp_y;
        }
    }
};
void solve()
{    
    int n,m1,m2;
    cin>>n>>m1>>m2;
    dsu a1(n);
    dsu a2(n);
    for(int i=0;i<m1;i++)
    {
        int u,v;
        cin>>u>>v;
        a1.un(u,v);
    }  
    for(int i=0;i<m2;i++)
    {
        int u,v;
        cin>>u>>v;
        a2.un(u,v);
    }
    vector<pair<int,int>>ans;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a1.parent(i)!=a1.parent(j) && a2.parent(i) != a2.parent(j))
            {
                ans.push_back({i,j});
                a1.un(i,j);
                a2.un(i,j);
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto i : ans)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
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