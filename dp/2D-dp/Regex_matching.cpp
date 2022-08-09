#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int dp[b.size()+1][a.size()+1];
    memset(dp , 0 ,sizeof(dp));
    int n = a.size();
    int m = b.size();
    dp[0][0] = 1;
    for(int i = 1;i<=m;i++)
    {
        for(int j = 0;j<=n;j++)
        {
            if(j == 0)
            {
                if(b[i-1] == '*')
                    dp[i][j] = dp[i-1][j];

                    continue;
            }
            if(b[i-1] == a[j-1] || b[i-1] == '?') 
                dp[i][j] = dp[i-1][j-1];
            
            else if(b[i-1] == '*') 
                dp[i][j] = (dp[i][j-1] || dp[i-1][j-1] || dp[i-1][j]);
        }
    }
    cout<<dp[m][n]<<endl;
}