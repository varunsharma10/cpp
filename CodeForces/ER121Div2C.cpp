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
    ll k[n],h[n];
    for(ll i=0;i<n;i++)
    {
        cin>>k[i];
    }       
    for(ll i=0;i<n;i++)
    {
        cin>>h[i];
    }
    stack<pair<ll,ll>>s;
    s.push({k[0] , h[0]});
    for(ll i=1;i<n;i++)
    {
        while(s.size() >= 1)
        {
            ll diff = k[i] - s.top().first;
            if(diff >= h[i])
            {
                s.push({k[i] , h[i]});
                break;
            }
            else
            {
                h[i] = max({s.top().second + diff , h[i]});
                s.pop();
            }

        }
        if(s.empty())
        {
            s.push({k[i] , h[i]});
        }
    }
    ll ans = 0;
    while(!s.empty())
    {
        ll val = s.top().second;
        ans += val*(val + 1)/2;
        s.pop();
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