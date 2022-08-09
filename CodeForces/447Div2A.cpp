#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    string s;
    cin>>s;
    string b = "QAQ";
    int n = s.size();
    int m = b.size();
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<=m;i++)
    {
        dp[0][i] = 0;
    }
    for(int i=0;i<=n;i++)
    {
        dp[i][0] = 1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {   
            if(s[i-1] == b[j-1])
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
            else
            dp[i][j] = dp[i-1][j];
        }
    }
    
    cout<<dp[n][m]<<endl;
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