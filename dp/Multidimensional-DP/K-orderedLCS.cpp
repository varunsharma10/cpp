#include<bits/stdc++.h>
using namespace std;

#define ll long long int
ll n,m,K;
ll dp[2005][2005][6];
ll arr[2005];
ll b[2005];
ll solve(int i , int j , int k)
{
    if(i >= n || j >= m)
        return 0;
    
    if(dp[i][j][k] != -1)
        return dp[i][j][k];

    ll res = 0;

    if(arr[i] == b[j])
    {
        res = solve(i + 1 , j + 1, k) + 1;
    }
    else
    {
        if(k > 0)
        {
            res =  1 + solve(i+1 , j+1 , k-1);
        }
        res = max({res , solve(i+1 , j , k) , solve(i , j+1 , k)});
    }
    return dp[i][j][k] = res;

}
int main()
{
    memset(dp , -1 ,sizeof(dp));
    cin>>n>>m>>K;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    cout<<solve(0 , 0 , K)<<endl;
}