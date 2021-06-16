#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
bool fair(ll x)
{
    ll a = x;
    while(x)
    {
        if(x%10 && a % (x%10))
        return false;

        x /=10;
    }
    return true;
}
void solve()
{    
    ll n;
    cin>>n;
    while(!fair(n))
    {
        n++;
    }
    cout<<n<<endl;
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
