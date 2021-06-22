#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n ,x,t;
    cin>>n>>x>>t;
    ll k = t/x;
    ll ans = 0;
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    if(k > n-1)
    {
        k = n-1;
    }
    ans += k*(k-1)/2;
    ans+= k*(n-k);
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