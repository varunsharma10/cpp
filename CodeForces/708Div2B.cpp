#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n, m;
    cin >> n >> m;
    map<int, int> cnt;
    while (n--) {
        int x;
        cin >> x;
        cnt[x % m]++;
    }
    int ans = 0;
    for (auto &c : cnt) {
        if (c.first == 0) ans++;
        else if (2 * c.first == m) {
            ans++;
        } else if (2 * c.first < m || cnt.find(m - c.first) == cnt.end()) {
            int x = c.second, y = cnt[m - c.first];
            ans += 1 + max(0, abs(x - y) - 1);
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