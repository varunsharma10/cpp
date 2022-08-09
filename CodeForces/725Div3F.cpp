#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll ans(ll a)
{   
    ll count1=0;
    for(int i=1;i<=a;i*=10LL)
    {
        count1+=a/i;
    }
    return count1;
}
void solve()
{    
    ll l,r;
    cin>>l>>r;
    cout<<ans(r) - ans(l)<<endl;  
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