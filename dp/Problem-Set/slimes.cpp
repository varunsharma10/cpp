#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 402;
ll sum[N][N];
ll dp[N][N];
ll n;
ll arr[N];
ll solve(ll i , ll j)
{
    if(i == j)
        return 0;
    
    if(dp[i][j] != -1)
        return dp[i][j];
    
    ll ans =  1e18;
    for(int k=i;k<j;k++)
    {
        ans = min(ans , sum[i][j] + solve(i , k) + solve(k+1 , j));
    }
    return dp[i][j] = ans;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    memset(dp , -1,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum[i][j] = arr[j] + ((i== j) ? 0 : sum[i][j-1]);
        }
    }
    cout<<solve(0,n-1);


}