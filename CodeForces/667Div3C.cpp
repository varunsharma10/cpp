#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    
    int n, x, y;
        cin >> n >> x >> y;
        int diff = y - x;
        for (int delta = 1; delta <= diff; ++delta) {
            if (diff % delta) continue;
            if (diff / delta + 1 > n) continue;
            int k = min((y - 1) / delta, n - 1);
            int a0 = y - k * delta;
            for (int i = 0; i < n; ++i) {
                cout << (a0 + i * delta) << ' ';
            }
        
    cout << endl;
    break;
}
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