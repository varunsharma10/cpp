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
    int dp1[n][m];
    int dp2[n][m];
    int dp3[n][m];
    int dp4[n][m];

    memset(dp1 , 0 ,sizeof(dp1));
    memset(dp2 , 0 ,sizeof(dp2));
    memset(dp3 , 0 ,sizeof(dp3));
    memset(dp4 , 0 ,sizeof(dp4));
    dp1[0][0] = grid[0][0];
    for(int i=1;i<n;i++)
    {
        dp1[i][0] = dp1[i-1][0] + grid[i][0];
    }
    for(int i=1;i<m;i++)
    {
        dp1[0][i] = dp1[0][i-1] + grid[0][i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            dp1[i][j] = max(dp1[i-1][j] , dp1[i][j-1]) + grid[i][j];
        }
    }
    dp2[n-1][0] = grid[n-1][0];
    for(int i=n-2;i>=0;i--)
    {
        dp2[i][0] = dp2[i+1][0] + grid[i][0];
    }
    for(int i=1;i<m;i++)
    {
        dp1[0][i] = dp1[0][i-1] + grid[0][i];
    }
    for(int i=n-2;i>=0;i--)
    {
        for(int j=1;j<m;j++)
        {
            dp2[i][j] = max(dp2[i+1][j] , dp1[i][j-1]) + grid[i][j];
        }
    }
    dp3[n-1][m-1] = grid[n-1][m-1];
    for(int i=n-2;i>=0;i--)
    {
        dp3[i][0] = dp3[i+1][0] + grid[i][0];
    }
    for(int i=m-2;i>=0;i--)
    {
        dp3[0][i] = dp3[0][i+1] + grid[0][i];
    }
    for(int i=n-2;i>=0;i--)
    {
        for(int j=m-2;j>=0;j--)
        {
            dp3[i][j] = max(dp3[i+1][j] , dp3[i][j+1]) + grid[i][j];
        }
    }
    dp4[0][m-1] = grid[0][m-1];
    for(int i=1;i<n;i++)
    {
        dp1[i][0] = dp1[i-1][0] + grid[i][0];
    }
    for(int i=m-2;i>=0;i--)
    {
        dp4[0][i] = dp4[0][i+1] + grid[0][i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=m-2;j>=0;j--)
        {
            dp4[i][j] = max(dp4[i-1][j] , dp4[i][j+1]) + grid[i][j];
        }
    }
    int ans = 0;
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;i<n-1;j++)
        {
            int a = dp1[i-1][j] + dp2[i][j-1] + dp3[i+1][j] + dp4[i][j+1];
            int b = dp1[i][j-1] + dp3[i][j+1] + dp2[i+1][j] + dp4[i-1][j];
            ans = max({a , b , ans}); 
        }
    }



}