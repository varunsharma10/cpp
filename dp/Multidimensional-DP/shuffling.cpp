#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,k;
const int mod = 1e6+3;
ll dp[32][32][32][2];
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    int count1 = 0;
    int count2 = 0;
    while(a)
    {
        if(a & 1 == 1)
            count1++;
        
        a = a/2;
    }
    while(b)
    {
        if(b & 1 == 1)
            count2++;
        
        b = b/2;
    }
    
    string s;
    while(c)
    {
        if(c & 1 == 1)
            s+='1';
        else
            s+='0';
        
        c = c/2;
    }
    memset(dp , 0 ,sizeof(dp));
    if(s[0]=='1')
    {
        dp[0][1][0][0]=1;
        dp[0][0][1][0]=1;
    }
    else
    {
        dp[0][0][0][0]=1;
        dp[0][1][1][1]=1;
    }
    int n = s.size();
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=count1;j++)
        {
            for(int k=0;k<=count2;k++)
            {
                if(s[i] == '1')
                {
                    dp[i][j][k][0]+=dp[i-1][j][k][1];
                    if(j >= 1)
                    {
                        dp[i][j][k][0] += dp[i-1][j-1][k][0];
                    }
                    if(k >= 1)
                    {
                        dp[i][j][k][0] += dp[i-1][j][k-1][0];
                    }
                    if(j >= 1 && k >= 1)
                    {
                        dp[i][j][k][1] += dp[i-1][j-1][k-1][1]; 
                    }
                } 
                else
                {
                    dp[i][j][k][0] += dp[i-1][j][k][0];
                    if(j >= 1)
                    {
                        dp[i][j][k][1] += dp[i-1][j-1][k][1];
                    }
                    if(k >= 1)
                    {
                        dp[i][j][k][1] += dp[i-1][j][k-1][1];
                    }
                    if(j >= 1 && k >= 1)
                    {
                        dp[i][j][k][1] += dp[i][j-1][k-1][0]; 
                    }
                }
            }
        }
    }
    cout<<dp[n-1][count1][count2][0]<<endl;  
}