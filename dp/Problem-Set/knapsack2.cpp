#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 105;
const int W = 100005;
ll n,w;
ll weight[N];
ll value[N];
ll dp[N][W];
int main()
{
    cin>>n>>w;
    for(int i=0;i<n;i++)
    {
        cin>>weight[i]>>value[i];
    }
    // for(int i=0;i<n;i++)
    // {
    //     dp[i][0] = 0;
    // }
    // for(int i=0;i<=w;i++)
    // {
    //     dp[0][i] = 0;
    // }
    memset(dp , 0 ,sizeof(dp));
    for(int i=0;i<=n*1000;i++)
    {
        dp[0][i] = 1e18;
    }
    dp[0][0] = 0;
    dp[0][value[0]] = weight[0];
    // dp[1][]
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n*1000;j++)
        {
            dp[i][j] = dp[i-1][j];

            if(j >= value[i-1])
            {
                dp[i][j] = min(dp[i-1][j] , weight[i-1] + dp[i-1][j-value[i-1]]);
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
            // cout<<dp[i][j]<<" ";
        }   
    }
    ll ans = -1e18;
    for(int i=0;i<=1000;i++)
    {
        if(dp[n][i] <= w)
        {
            ans = i;
        }
    }
    cout<<ans<<endl;

    // memset(dp , -1 ,sizeof(dp));
   
}