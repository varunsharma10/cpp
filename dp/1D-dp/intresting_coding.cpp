#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0] == '0')
        {
            cout<<0<<endl;
            break;
        }
        long long n = s.size();
        long long dp[n+1];
        dp[0] = 1;
        dp[1] = 1;
        for(long long i=2;i<=n;i++)
        {
            dp[i] = 0;
            char c2 = s[i-1] - '0';
            char c1 = s[i-2] - '0';
            if(c1 == 1 || (c1 == 2 && c2 <= 6))
            {
                dp[i] += dp[i-2];
            }
            if(c2 != 0)
            {
                dp[i] += dp[i-1];
            }
        }
        cout<<dp[n]<<endl;
    }
    
}