#include<bits/stdc++.h>
using namespace std;
int n;
int dp[500005][2][3];
int solve(int i , int b , int c)
{
    if(b < 0 || c < 0)
        return 0;
    
    if(i == 0)
        return 1;
    
    if(b == 0 && c == 0)
        return 1;

    if(dp[i][b][c] != -1)
        return dp[i][b][c];
    
    int res = solve(i-1 , b , c) + solve(i-1 , b-1 , c) + solve(i-1 , b , c-1);
    return dp[i][b][c] = res;

}
int main()
{
    cin>>n;
    memset(dp , -1 ,sizeof(dp));
    cout<<solve(n , 2 , 1)<<endl;
}