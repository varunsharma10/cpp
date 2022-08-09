#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

void solve()
{    
    ll t;
    cin>>t;
    map<ll,ll>mp;
    ll x;
    vector<vector<ll>>ans;
    vector<ll>res;
    for(ll i=0;i<t;i++)
    {
        cin>>x;
    
        if(x == 1)
        {
            ll tmp;
            cin>>tmp;
            ans.push_back({x,tmp});
        }       
        else if(x == 2)
        {
            ll a,b;
            cin>>a>>b;
            ans.push_back({x,a,b});
        }
    }
    // cout<<ans[t-2].size();
    const ll N = 500001;
    for(ll i=1;i<=N;i++)
    {
        mp[i] = i;
    }
    for(ll i=t-1;i>=0;i--)
    {
        if(ans[i].size() == 2)
        {
            res.push_back(mp[ans[i][1]]);
            
        }
        else
        {
            mp[ans[i][1]] = mp[ans[i][2]];
        }
    }
    for(ll i = res.size()-1;i>=0;i--)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    // ll t;
    // cin>>t=1;
    solve();
}