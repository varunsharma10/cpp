#include<bits/stdc++.h>
using namespace std;
int dp[200][200];
int solve(int i , int j)
{
    if(i == 1)
        return j;
    
    if(j == 0 || j == 1)
        return j;
    
    if(dp[i][j] != -1)
        return dp[i][j];
    
    int val = INT_MAX;
    for(int it=1;it<=j;it++)
    {
        val = min(val , max(solve(i-1 , it-1) , solve(i , j-it)));
    }
    return dp[i][j] = val + 1;
    
}
int main()
{
    int n;
    cin>>n;
    int egg;
    cin>>egg;
    memset(dp , -1 ,sizeof(dp));
    cout<<solve(egg , n)<<endl;
       
}