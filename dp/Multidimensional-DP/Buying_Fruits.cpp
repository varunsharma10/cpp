#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,k;
const int mod = 1e6+3;
ll dp[4][10005];
int main()
{
    cin>>n;
    vector<int>adj[n+1];
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj[i].push_back(a);
        adj[i].push_back(b);
        adj[i].push_back(c);
    }
    dp[0][0] = adj[0][0];
    dp[1][0] = adj[0][1];
    dp[2][0] = adj[0][2];

    for(int j=1;j<n;j++)
    {
        dp[0][j] = adj[j][0] + min(dp[1][j-1] , dp[2][j-1]);
        dp[1][j] = adj[j][1] + min(dp[0][j-1] , dp[2][j-1]);
        dp[2][j] = adj[j][2] + min(dp[1][j-1] , dp[0][j-1]); 

    }

    cout<<min({dp[0][n-1] , dp[1][n-1] , dp[2][n-1]})<<endl;
    
    
    
}