#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n, k; 
    cin >> n >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
    ll ans = -1e12;
    int l = max(1, n - 2 * k);
    for (int i = l; i <= n; i++) 
    {
        for (int j = i + 1; j <= n; j++) 
        {
            ans = max(ans, 1LL * i * j - 1LL * k * (a[i] | a[j]));
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