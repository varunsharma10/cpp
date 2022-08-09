#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 3005;
ll n,k;
ll arr[N];
const int mod = 1e9+7;
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    ll dp[n+2][k+2];
    memset(dp , 0 , sizeof(dp));
    for(int i=0;i<=k;i++)
    {
        dp[0][i] = (i > arr[0]) ? 0 : 1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=k;j++)
        {
            if(j == 0)
                dp[i][j] = (dp[i-1][j])%mod;
            else
            {
                dp[i][j] = (mod + dp[i-1][j] + dp[i][j-1] - (((j-arr[i]-1) >= 0) ? dp[i-1][j-arr[i]-1] : 0))%mod;
            }
        }
    }
    cout<<dp[n-1][k]<<endl;


}