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
    vector<int> loc[150001];
    for (int i = 1; i <= n; i++) 
    {
        int x;
        cin >> x;

        loc[x].push_back(i);
    }

    int ans = 0;
    bool can = 0;
    for (int i = 1; i < 150001; i++) 
    {
        if (loc[i].size() < 2) 
            continue;

        can = 1;
        for (int j = 0; j < loc[i].size() - 1; j++) 
        {
            ans = max(ans, loc[i][j] + n - loc[i][j+1]);
        }
    }

    if (!can) cout << "-1" << '\n';
    else {
        cout << ans << '\n';
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