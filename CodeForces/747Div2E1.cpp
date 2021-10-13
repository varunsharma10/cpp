#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll bin(ll a, ll b) {
    a %=mod;
    ll out = 1;
    while (b > 0) {
        if (b & 1)out = out * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return out;
}
void solve()
{    
    ll k;
    cin>>k;
    for(int i=1;i<=60;i++)
    {
        ll tmp = bin(4,(((bin(2,i) %mod))-2)) % mod;
        cout<<(6* (tmp % mod)%mod)<<"\n";
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