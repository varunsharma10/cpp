#include<bits/stdc++.h>
using namespace std;
long long dp[105][105];
long long size[105];
long long val[105];
vector<long long>col[105];
long long n,m,S;
long long knapsack(int i , int w)
{
    if(w < 0)
        return INT_MAX;

    if(i == m+1)
        return w;
    
    if(dp[i][w] != -1)
        return dp[i][w];
    
    long long ans = INT_MAX;
    for(int it = 0;it<col[i].size();it++)
    {
        ans = min(ans , knapsack(i+1 , w - col[i][it]));
    }
    return dp[i][w] = ans;
    

}
int main()
{
    cin>>n>>m>>S;
    memset(dp , -1 ,sizeof(dp));
    for(int i=1;i<=n;i++)
    {
        cin>>size[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>val[i];
    }
    for(int i=1;i<=n;i++)
    {
        col[val[i]].push_back(size[i]);
    }
    long long ans = knapsack(1 , S);
    if(ans == INT_MAX)
        cout<<-1<<endl;
    else
        cout<<ans<<endl;

}