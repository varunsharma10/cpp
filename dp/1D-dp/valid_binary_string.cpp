#include<bits/stdc++.h>
using namespace std;
// int dp[100005] = {-1};
int main()
{
    int n;
    cin>>n;
    int dp[n+1][2] = {0};
    dp[1][1] = 1;
    dp[1][0] = 1;
    for(int i=2;i<=n;i++)
    {
        dp[i][0] = dp[i-1][0] + dp[i-1][1];
        dp[i][1] = dp[i-1][0];
    }

    cout<<dp[n][0] + dp[n][1]<<endl;

}