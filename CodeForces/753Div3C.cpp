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
    vector<ll> arr;
    multiset<ll>m;
    for(ll i = 0 ; i < n ; i++) 
    {
        ll x;
        cin>>x;
        arr.push_back(x);
    }
    for(ll i = 0 ; i < n ; i++) 
    {
        m.insert(arr[i]);
    }
    sort(arr.begin(),arr.end());
    ll tmp = 0;
    ll res=arr[0];
    for(ll i = 0 ; i < n ; i++) 
    {
        ll removed = (*m.begin() + tmp);
        res = max(res,removed);
        tmp-=removed;
        m.erase(m.begin());
    }
    cout << res << '\n';
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
