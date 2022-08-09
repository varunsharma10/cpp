#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[200003][11];
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define f first
#define s second
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
   
    string n;
    ll m;
    cin>>n>>m;
    ll ans=0;
    for(char c: n)
    {
        ans=(ans+dp[m][c-'0']) %mod;
    }
    cout<<ans<<endl;
    
}
int main()
{   
    cout << setprecision(15) << fixed;
    send help
	
	memset(dp, 0, sizeof(dp));
	
	for (ll i = 0; i < 10; i++) dp[0][i] = 1;
	
	for (ll i = 1; i <= 200003; i++) {
		for (ll j = 0; j < 9; j++) {
			dp[i][j] = dp[i - 1][j + 1];
		}
		
		dp[i][9] = (dp[i - 1][1] + dp[i - 1][0]) % mod;
	}
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}