#include<bits/stdc++.h>
using namespace std;

#define ll long long int
ll n,m;
ll dp[200][200][200];
char grid[200][200];

ll dx1[4] = {1 , 1 , 0 , 0};
ll dy1[4] = {0 , 0 , 1 , 1};
ll dx2[4] = {1 , 0 , 1 , 0};
ll dy2[4] = {0 , 1 , 0 , 1};

ll solve(ll x1 , ll y1 , ll x2 , ll y2)
{
    if(x1 >= n || y1 >= m || x2 >= n || y2 >= m || grid[x1][y1] == '#' || grid[x2][y2] == '#')
        return INT_MIN;
    
    if(x1 == n-1 && y1 == m-1)
        return (grid[x1][y1] == '*');
    
    if(dp[x1][y1][x2] != -1)
        return dp[x1][y1][x2];
    
    ll res = INT_MIN;

    for(int i=0;i<4;i++)
    {
        res = max(res , solve(x1 + dx1[i] , y1 + dy1[i] , x2 + dx2[i] , y2 + dy2[i]));
        
    }
    res += (grid[x1][y1] == '*');
    res += (grid[x2][y2] == '*');

    if(x1 == x2 && y1 == y2 && grid[x1][y1] == '*')
        res--;
    
    return dp[x1][y1][x2] = res;

}
int main()
{
    memset(dp , -1 ,sizeof(dp));
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    cout<<solve(0 , 0 , 0 ,0)<<endl;
}