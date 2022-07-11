#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    bool dp[n+1][target+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    dp[0][0] = true;
    for(int i=1;i<=n;i++)
    {
        dp[i][0] = true;
    }
    for(int i=1;i<=target;i++)
    {
        dp[0][i] = false;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=target;j++)
        {
            if(arr[i-1] <= j)
            {
                dp[i][j] = (dp[i-1][j - arr[i-1]] || dp[i-1][j]);
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[n][target]<<endl;
    
}