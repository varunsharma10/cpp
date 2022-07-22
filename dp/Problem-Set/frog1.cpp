#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int dp[n+1];
    memset(dp , 0 ,sizeof(dp));
    dp[1] = 0;
    dp[2] = abs(arr[1] - arr[2]) + dp[1];
    // dp[3] = min(abs(arr[1] - arr[3]) + dp[1] , abs(arr[2] - arr[3]) + dp[2]);

    for(int i=3;i<=n;i++)
    {
        dp[i] = min(abs(arr[i-2] - arr[i]) + dp[i-2] , abs(arr[i-1] - arr[i]) + dp[i-1]);
    }
    cout<<dp[n]<<endl;
}