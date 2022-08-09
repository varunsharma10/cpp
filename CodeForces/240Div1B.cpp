#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define add(a, b) (a + b >= mod? a + b - mod : a + b)
const int m = 2020;
ll dp[m][m];
void solve()
{    
    int n,k;
    cin>>k>>n;
    for(int i=1;i<=k;i++)
    {
        dp[1][i] = 1;
    }
	for(int i = 2; i <= n; i++) 
    {
		for(int j = 1; j <= k; j++) 
        {
			for(int kk = j; kk <= k; kk += j) 
            {
				dp[i][kk] = add(dp[i][kk], dp[i - 1][j]);
			}
		}
	}
	int ans = 0;
	for(int i = 1; i <= k; i++) {
		ans = add(ans, dp[n][i]);
	}
	cout << ans <<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}