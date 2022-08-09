#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int dp[n];
    memset(dp , 0 , sizeof(dp));
    dp[0] = 1;
    for(int i=1;i<=n;i++)
    {
        dp[i] = dp[i-1];
        if(i - m >=0)
        {
            dp[i] += dp[i-m];
        }
    }
    cout<<dp[n]<<endl;
}