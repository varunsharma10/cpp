#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n;
    cin >> n;

    string s(200, 'a');
    cout << s << endl;

    for (int i = 0; i < n; ++i)
    {
        int u;
        cin >> u;
        s[u] = s[u] == 'a' ? 'b' : 'a';
        cout << s << endl;
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