#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n,b;
    cin>>n>>b;
    ll ans=0;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    b++;
    for(ll i=0;i<n-1;i++)
    {
        if(b > 0)
        {
            ll x = pow(10, arr[i+1]-arr[i]) - 1;
            ll tmp = min(x,b);
            ans += tmp*pow(10,arr[i]);
            b -= tmp;
        }
    }
    ll tmp = b*pow(10 , arr[n-1]);
    ans += tmp;

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