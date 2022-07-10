#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    string a , b;
    cin>>a>>b;
    int dp[n+1][m+1];
    memset(dp , 0 ,sizeof(dp));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1] == b[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
    }
    int i = n;
    int j = m;
    string ans = "";
    while(i>0 && j>0)
    {
        if(a[i-1] == b[j-1])
        {
            ans = a[i-1] + ans;
            i--;
            j--;
        }
        else
        {
            if(dp[i-1][j] > dp[i][j-1])
            {
                i--;
            }
            else
            {
                j--;
            }
        }
    }
    cout<<ans<<endl;
}