#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int grid[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    int dp[n][m];
    memset(dp , 0 ,sizeof(dp));
    dp[0][0] = grid[0][0];
    for(int i=1;i<n;i++)
    {
        dp[i][0] += dp[i-1][0] + grid[i][0];
    }
    for(int i=1;i<m;i++)
    {
        dp[0][i] += dp[0][i-1] + grid[0][i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            dp[i][j] += max(0,dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1]) + grid[i][j];
        }
    }
    int ans = 0;
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<m-1;j++)
        {
            int a = dp[i-1][j-1];
            int b = dp[i-1][m-1] - a;
            int c = dp[n-1][j-1] - a;
            int d = dp[n-1][m-1] - a - b - c;

            ans = max(ans , min({a,b,c,d}));
        }
       
    }
    cout<<ans<<endl;
}