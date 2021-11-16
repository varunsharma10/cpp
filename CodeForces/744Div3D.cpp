#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n;
    cin>>n;
    ll v[n];
    priority_queue<pair<ll,ll>> q;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i] > 0)
            q.push({v[i],i});
    }
    vector<vector<ll>> res;
    while(q.size()>1)
    {
        ll tmp1=q.top().first;
        ll idx=q.top().second+1;
        q.pop();
        ll tmp2=q.top().first;
        ll idx2=q.top().second+1;
        q.pop();
        tmp1--;
        tmp2--;
        res.push_back({idx,idx2});
        if(tmp1>0)
        {
            q.push({tmp1,idx-1});
        }
        if(tmp2>0)
        {
            q.push({tmp2,idx2-1});
        }
    }
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++)
    {
        for(int j =0;j<res[0].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
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