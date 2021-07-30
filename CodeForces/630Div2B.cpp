#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
vector<int>ans[1004];
vector<int>res(1004);
int f(int u)
{
    for (int i=2;i<=u;++i)
    {
        if (u%i==0) 
        return i;
    }
    return -1;
}

void solve()
{    
    int n;
    cin>>n;
    for(int i=1;i<=1000;i++)
    {
        ans[i].clear();
    }
    for(int i=1;i<=n;i++)
    {
        int u;
        cin>>u;
        ans[f(u)].push_back(i);
    }
   
    int m =0;
    for(int i=1;i<=1000;i++)
    {
        if(ans[i].size()>0)
        {
            m++;
            for(auto c : ans[i])
            {
                res[c] = m;
            }
        }
    }
    cout<<m<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<res[i]<<" ";
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