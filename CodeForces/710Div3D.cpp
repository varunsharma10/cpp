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
    map<int,int>mp;
    priority_queue<pair<int,int>>p;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }       
    for(auto q : mp){
        p.push({q.second,q.first});
    }
    ll ans = n;
    while(p.size()>=2)
    {
        auto x = p.top();
        p.pop();
        auto y = p.top();
        p.pop();
        x.first--;
        y.first--;
        ans-=2;
        if(x.first)
        {
            p.push({x.first,x.second});
        }
        if(y.first)
        {
            p.push({y.first,x.second});
        }
    }
    cout<<ans<<endl;
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