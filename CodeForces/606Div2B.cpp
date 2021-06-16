#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
vector<int> v;
const int INF = 2e9;
void solve()
{    
    ll n;
    cin >> n;
    int ans = 0;
    for(auto x : v)
        if(x <= n)
            ans++;
            
        cout << ans << '\n';
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    for(int d = 1; d <= 9; d++) {
        ll x = d;
        while(x < INF) {
            v.push_back(x);
            x = 10*x + d;
        }
    }
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}