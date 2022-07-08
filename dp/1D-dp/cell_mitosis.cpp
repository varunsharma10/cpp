#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,y,z;
    int dp[n+1];
    cin>>x>>y>>z;
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++)
    {
        if(i%2 != 0)
        {
            dp[i] = min(dp[i/2] + x , dp[(i+1)/2] + x + z);
        }
        else
        {
            dp[i] = min(dp[i-1] + y , dp[i/2] + x); 
        }
    }
    cout<<dp[n]<<endl;
    
}