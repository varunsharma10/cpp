#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[1001][1001];
ll n,T;
const int mod = 1e9+7;
int main()
{
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>T;

    memset(dp , 0 , sizeof(dp));
    ll ans = 0;
    
    for(int i=0;i<n;i++)
    {
        dp[i][0] = 1;
    }
    for(int j=1;j<=T;j++)
    {
        dp[0][j] = 0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=T;j++)
        {
            dp[i][j] =  (dp[i][j] + dp[i-1][j])%mod;
            if(j >= arr[i-1])
            {
                dp[i][j] = (dp[i][j] + dp[i][j- arr[i-1]])%mod;
            }
        }
    }
    cout<<(dp[n][T])%mod<<endl;
    // cout<<ans<<endl;
}