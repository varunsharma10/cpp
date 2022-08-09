#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll lcm(ll a, ll b)
{
    return a/__gcd(a,b)*b;
}
void solve()
{    
    ll x;
    cin>>x;
    ll ans =0;
    for(ll i=1;i*i<=x;i++)
    {
        if(x%i==0 && lcm(i,x/i) == x){
            ans = i;
        }
    }       
    cout<<ans<<" "<<x/ans<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}