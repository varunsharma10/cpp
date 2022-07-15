#include<bits/stdc++.h>
using namespace std;
int n;
int grid[101][101];
int vis_all = (1 << n) - 1;
int dp[101][(1 << 10) + 1];

int tsp(int pos , int mask)
{
    if(mask == (1 << n) - 1)
        return grid[pos][0];
    
    if(dp[pos][mask] != -1)
        return dp[pos][mask];

    int ans = INT_MAX;
    for(int city=0;city<n;city++)
    {
        if(((1 << city) & mask) == 0)
        {
            int newans = tsp(city , ((1 << city) | mask)) + grid[pos][city];
            ans = min(ans , newans);
        }
    }
    return dp[pos][mask] = ans;

}

int main()
{
    memset(dp , -1 ,sizeof(dp));
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
    cout<<tsp(0 , 1)<<endl;

}