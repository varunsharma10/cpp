#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n, ans = 0, lcm = 1;
        cin >> n;
        for(ll i=1;i<=n;i++)
        {
            if ((lcm * i) / __gcd(lcm, i) > n)
                break;
            lcm = (lcm * i) / __gcd(lcm, i);
            ans += n / lcm;
        }
        cout << (ans + n) % (mod);
        cout<<endl;
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