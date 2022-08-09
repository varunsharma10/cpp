#include<bits/stdc++.h>
using namespace std;
long long dp[1005][1005];
long long size[1005];
long long val[1005];
long long knapsack(int i , int w)
{
    if(i == 0 || w == 0)
        return 0;
    
    if(dp[i][w] != -1)
        return dp[i][w];
    
    int inc = 0;
    int exc = 0;
    if(size[i-1] <= w)
    {
        inc = knapsack(i , w - size[i-1]) + val[i-1];
    }
    exc = knapsack(i - 1 , w);

    return dp[i][w] = max(inc , exc);
}
int main()
{
    int n,S;
    cin>>n>>S;
    memset(dp , -1 ,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        cin>>size[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }

    cout<<knapsack(n-1 , S)<<endl;


}