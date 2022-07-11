#include<bits/stdc++.h>
using namespace std;
long long arr[4005];
long long dp[4005][4005];
long long sum[4005][4005];
long long n;
int cir(int x) 
{
    if (x < n)
        return x;

    return x - n;
}

int solve(int i , int j)
{
    if(i == j)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
    
    if(cir(i + 1) == j)
        return dp[i][j] = arr[i] + arr[j];
    
    int res = INT_MAX;
    for(int k=i;k!=j; k = cir(k+1))
    {
        int tmp = solve(i , k) + solve(cir(k+1) , j) + sum[i][j];
        res = min(res , tmp);
    }
    return dp[i][j] = res;
}
int main()
{

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    memset(dp , -1 , sizeof(dp));
    for (int i = 0; i < n; i++) 
    {
        sum[i][i] = arr[i];
        for (int j = cir(i + 1); j != i; j = cir(j + 1)) 
        {
            sum[i][j] = sum[i][cir(j + n - 1)] + arr[j];
        }
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) 
    {
        ans = min(ans, solve(i, cir(i + n - 1)));
    }
    cout << ans << endl;


}