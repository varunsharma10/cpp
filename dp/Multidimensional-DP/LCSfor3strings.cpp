#include<bits/stdc++.h>
using namespace std;

#define ll long long int
ll n,m;
ll dp[200][200][200];

int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    for(int i=1;i<=a.size();i++)
    {
        for(int j=1;j<=b.size();j++)
        {
            for(int k=1;k<=c.size();k++)
            {
                if(a[i-1] == b[j-1] && b[j-1] == c[k-1])
                {
                    dp[i][j][k] = 1 + dp[i-1][j-1][k-1];
                }
                else
                {
                    dp[i][j][k] = max({dp[i-1][j][k] , dp[i][j-1][k] , dp[i][j][k-1]});
                }
            }
        }
    }
    cout<<dp[a.size()][b.size()][c.size()]<<endl;
    

}