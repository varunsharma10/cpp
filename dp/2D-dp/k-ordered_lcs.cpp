#include<bits/stdc++.h>
using namespace std;
long long dp[2005][2005][6];
long long arr[2005];
long long n,m;
long long b[5005];
int solve(int i , int j , int k)
{
    if(i >= n || j >= m)
        return 0;
    
    if(dp[i][j][j] != -1)
    {
        return dp[i][j][k];
    }
    int res = INT_MIN;

    if(arr[i] == b[j])
    {
        res = 1 + solve(i+1 , j+1 , k);
    }
    else
    {
        if(k > 0)
        {
            res = max(res , solve(i+1 , j+1 , k-1) + 1);
        }
        else
        {
            res = max({res , solve(i+1 , j , k) , solve(i , j+1 , k)});
        }
    }
    return dp[i][j][k] = res;

}
int main()
{
    cin>>n;
    cin>>m;
    int k;
    cin>>k;
    memset(dp , -1 , sizeof(dp));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cout<<solve(0 , 0 , k)<<endl;
      
}