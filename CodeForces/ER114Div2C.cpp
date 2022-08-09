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
    ll ans = 0;
    vector<ll>str(n);
    ll sum = 0;
    for(ll i=0;i<n;i++)
    {
        cin>>str[i];
        sum+=str[i];
    }
    sort(str.begin(),str.end());
    ll m;
    cin>>m;
    vector<pair<ll,ll>>drag(m);
    // cout<<m;
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        // cout<<a<<" "<<b;
        drag[i].first = a;
        drag[i].second = b;
    }
    vector<ll>pre = str;
    for(ll i=1;i<n;i++)
    {
        pre[i] = pre[i-1] + pre[i];
    }
    // cout<<drag[0].first;
    ll tmpsum = sum;
    ll tmp2 = (ll)0;
    for(ll i=0;i<m;i++)
    {
        ll ans = INT_MAX;
        ll idx = lower_bound(str.begin(),str.end(),drag[i].first) - str.begin();
        if(idx==n)
        {
            ans = drag[i].first - str[idx-1] + max(ll(0) , drag[i].second - pre[n-1] + str[idx-1]);
        }
        else if(idx!=0)
        {
            ans = min(max(ll(0) , drag[i].first - str[idx]) +  max(ll(0) , drag[i].second - pre[n-1] + str[idx]) , max(ll(0) , drag[i].first - str[idx-1]) +  max(ll(0) , drag[i].second - pre[n-1] + str[idx-1]));
        }
        else
        {
            ans = max(ll(0) , drag[i].first - str[idx]) +  max(ll(0) , drag[i].second - pre[n-1] + str[idx]);
        }
        cout<<ans<<endl;
    }

}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t = 1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}