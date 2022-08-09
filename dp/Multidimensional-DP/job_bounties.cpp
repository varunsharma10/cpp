#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[1001][1001];
ll n,T;
int main()
{
    cin>>T>>n;
    ll dur[n];
    ll rew[n];
    ll dead[n];
    for(int i=0;i<n;i++)
    {
        cin>>rew[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>dur[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>dead[i];
    }
    memset(dp , 0 , sizeof(dp));
    ll ans = 0;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=T;j++)
        {
            if(dur[i-1] <= j && dead[i-1] >= j)
            {
                dp[i][j] = max(dp[i-1][j] , rew[i-1] + dp[i-1][j-dur[i-1]]);
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
            ans = max(ans , dp[i][j]);
        }
    }
    cout<<ans<<endl;
}