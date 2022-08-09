#include<bits/stdc++.h>
using namespace std;
long long dp[1005][1005];
long long n,m;
string a,b;
bool solve(int i , int j)
{
    if(i >= n && j >= m)
        return 1;
    
    if(j >= m)
        return 0;
    
    if(dp[i][j] != -1)
        return dp[i][j];

    bool ans = (i < n && (a[i] == b[j] || b[j] == '?'));
    if(ans)
        return dp[i][j] = solve(i+1 , j+1);
    
    if(a[i] != b[j])
    {
        if(b[j] == '*')
        {
            return dp[i][j] = (solve(i , j+1) || (i < n && solve(i+1 , j)));
        }
    }
    return dp[i][j] = false;
}
int main()
{
    cin>>n>>m;
    cin>>a>>b;
    memset(dp , -1 , sizeof(dp));
    if(solve(0 , 0) == false)
        cout<<0<<endl;
    else
        cout<<1<<endl;


}