#include<bits/stdc++.h>
using namespace std;
map<long long,long long>dp;
long long solve(long long n)
{
    if(n == 1)
        return 1;
    
    if(n <= 11)
    {
        dp[n] = n;
        return dp[n];
    }
    if(dp.find(n) != dp.end())
    {
        return dp[n];
    }
    long long ans = max(n , solve(n/3) + solve(n/2) + solve(n/4));
    return dp[n] = ans;
}
int main()
{
    long long n;
    cin>>n;
    cout<<solve(n)<<endl;
}