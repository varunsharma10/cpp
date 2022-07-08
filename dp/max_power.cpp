#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = 0;
    int dp[n+1][2] = {0};
    dp[0][0] = arr[0] > 0 ? arr[0] : 0;
    dp[1][0] = arr[0] > 0 ? 0 : arr[0];   
    for(int i=1;i<n;i++)
    {
        if(arr[i] < 0)
        {
            dp[i][0] = arr[i]*dp[i-1][1];
            dp[i][1] = min(arr[i] , dp[i-1][0]*arr[i]);
        }
        if(arr[i] > 0)
        {
            dp[i][0] = max(arr[i] , dp[i-1][0] * arr[i]);
            dp[i][1] = arr[i]*dp[i-1][1];
        }
        if(arr[i] == 0)
        {
            if(dp[i][0] < 0)
                dp[i][0] = 0;
        }
        ans = max(ans , dp[i][0]);
    }
    cout<<ans<<endl;

}