#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m;
const int mod = 1e6+3;
ll dp[101][101][101];
int main()
{
    cin>>n>>m;
    ll grid[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    int ans = INT_MIN;
    for(int i=0;i<m;i++)
    {
        int dp[n]={0};
        for(int j=i;j<m;j++)
        {
            int curr = 0;
            for(int r=0;r<n;r++)
            {
                dp[r] += grid[r][j];
                curr += dp[r];
                
                if(curr>ans) 
                    ans = curr;
                if(curr<0) 
                    curr = 0;
            }
        }
    }

    cout<<ans<<endl;
}