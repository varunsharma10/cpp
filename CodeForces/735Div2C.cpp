#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n,m;
    cin>>n>>m;
    int ans = 0;
    m++;
    for (int k = 30; k >= 0 and n < m; k--) 
    {
        if ((n >> k & 1) == (m >> k & 1)) 
        continue;
        if (m >> k & 1)
        {
            ans |= 1 << k;
            n |= 1 << k;
        } 
        
    }
    cout << ans << '\n';
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