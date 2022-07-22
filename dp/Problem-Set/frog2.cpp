#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
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
        int mini = INT_MAX;
        int j=i-1;
        int count = 1;
        while(count <= k && j >= 1)
        {
            mini = min(abs(arr[i] - arr[j]) + dp[j] , mini);
            count++;
            j--;
        }
        dp[i] = mini;
    }
    cout<<dp[n]<<endl;
}