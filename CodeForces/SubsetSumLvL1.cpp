#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int dp[n+1][k+1];
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
    for (int i = 1; i <= k; i++)
        dp[0][i] = false;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(arr[i-1]>j)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }
        }
        
        
    }
    cout<<dp[n][k]<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}