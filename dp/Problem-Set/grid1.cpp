#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
const int N = 1005;
ll h,w;
char grid[N][N];
ll dp[N][N];
vector<pair<int,int>>dir{{1,0},{0,1},{-1,0},{0,-1}};

int main()
{
    cin>>h>>w;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            cin>>grid[i][j];
        }
    }
    memset(dp , 0 ,sizeof(dp));
    dp[0][0] = 1;
    for(int i=1;i<h;i++)
    {
        if(grid[i][0] == '#')
            break;
        else
        {
            dp[i][0] += dp[i-1][0];
        }
    }
    for(int i=1;i<w;i++)
    {
        if(grid[0][i] == '#')
            break;
        else
        {
            dp[0][i] += dp[0][i-1];
        }
    }
    for(int i=1;i<h;i++)
    {
        for(int j=1;j<w;j++)
        {
            if(grid[i][j] == '#')
                dp[i][j] = 0;
            else
            {
                dp[i][j] = (dp[i][j] + dp[i-1][j] + dp[i][j-1])%mod;
            }
        }
    }
    cout<<dp[h-1][w-1]<<endl;



}