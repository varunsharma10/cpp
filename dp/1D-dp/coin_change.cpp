#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum;
    cin>>sum;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int dp[1005] = {0};
    dp[0] = 1;
    for(int i=0; i<n; i++)
        for(int j=arr[i]; j<=sum; j++)
            dp[j] += dp[j-arr[i]];
 
    cout<<dp[sum]<<endl;
}