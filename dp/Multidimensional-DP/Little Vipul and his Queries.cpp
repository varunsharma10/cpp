#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,k;
const int mod = 1e6+3;
ll dp[101][201][201];
int main()
{
    cin>>n;
    vector<string>s(n);
    vector<pair<int,int>>count;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        int red = 0;
        int blue = 0;
        for(auto it : s[i])
        {
            if(it == 'R')
                red++;
            else
                blue++;
        }
        count.push_back({red , blue});
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=100;j++)
        {
            for(int k=0;k<=100;k++)
            {
                if(i == 0)
                {
                    if(count[i].first <= j && count[i].second <= k)
                        dp[i][j][k] = 1;
                }
                else
                {
                    if(count[i].first <= j && count[i].second <= k)
                    {
                        dp[i][j][k] = max({dp[i-1][j][k] , 1 + dp[i-1][i- count[i].first][k - count[i].second]}); 
                    }
                    else
                    {
                        dp[i][j][k] = dp[i-1][j][k];
                    }
                }
            }
        }
    }
    int q;
    
    cin>>q;
    while(q--)
    {
        int x , y;
        cin>>x>>y;
        cout<<dp[n-1][x][y]<<endl;
    }

}