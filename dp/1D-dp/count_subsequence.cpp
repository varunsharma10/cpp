#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mod = 1e9+7;
    int n;
    string s;
    cin>>n;
    cin>>s;
    long long dp[n+1] = {0};
    long long prev[n+1] = {-1};
    dp[0] = 1;
    prev[s[0]] = 0;
    for(long long i=1;i<=n;i++)
    {
       dp[i]=(2*dp[i-1])%mod;

          if(prev[s[i-1]]!=-1)
            dp[i]=(dp[i]-dp[prev[s[i-1]]-1]+mod)%mod;

        prev[s[i-1]]=i;
    }
    cout<<dp[n]<<endl;

}