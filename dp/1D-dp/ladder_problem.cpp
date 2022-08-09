#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int dp[n];
    dp[0] = 1;
    for(int i=1;i<=n;i++)
    {
        dp[i] = 0;
        for(int j=1;j<=k;j++)
        {
            if(i - j >=0)
            {
                dp[i] +=dp[i-j];
            }
        }
    }

    cout<<dp[n]<<endl;
}