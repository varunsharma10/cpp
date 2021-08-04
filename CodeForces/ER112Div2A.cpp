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
    if(n<=6)
    {
        cout<<15<<endl;
        return;
    }
    else
    {
        if(n%2!=0)
        {
            n=n+1;
        }
        ans = n*5/2;
    }
    cout<<ans<<endl;
    return;

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