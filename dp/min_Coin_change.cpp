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
    int change;
    cin>>change;
    int dp[change];
    memset(dp , 0 ,sizeof(dp));
    for(int i=1;i<=change;i++)
    {
        dp[i] = INT_MAX;
        for(int j=0;j<n;j++)
        {
            if(i - arr[j] >= 0)
            dp[i] = min(dp[i - arr[j]] + 1, dp[i]);
        }
    }
    cout<<dp[change]<<endl;
}