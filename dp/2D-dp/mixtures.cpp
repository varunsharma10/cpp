#include<bits/stdc++.h>
using namespace std;
long long dp[1000][1000];
long long arr[100];
long long sum(int i , int j)
{
    long long ans = 0;
    for(int it=i;it<=j;it++)
    {
        ans+=arr[it];
        ans %= 100;
    }
    return ans;
}
long long solve(int i , int j)
{
    if(i >= j)
        return 0;
    
    if(dp[i][j] != -1)
        return dp[i][j];
    
    dp[i][j] = INT_MAX;
    for(int k=i;k<=j;k++)
    {
        dp[i][j] = min(dp[i][j] , solve(i , k) + solve(k+1 , j) + sum(i , k)*sum(k+1 , j));
    }
    return dp[i][j];
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    memset(dp , -1 ,sizeof(dp));
    cout<<solve(0 , n-1)<<endl;
}