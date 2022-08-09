#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,k;
const int mod = 1e6+3;
ll dp[101][3][101];
ll solve(ll i , ll prev , ll count)
{
    if(i == n-1)
    {
        if(count == k)
            return 1;
        else
            return 0;
    }

    if(dp[i][prev][count] != -1)
        return dp[i][prev][count];
    
    ll ans = 0;
    if(prev == 1)
    {
        ans += solve(i+1 , 1 , count + 1);
    }
    else
    {
        ans += solve(i+1 , 1 , count);
    }
    ans %= mod;

    ans += solve(i+1 , 0 , count);

    ans %= mod;

    return dp[i][prev][count] = ans;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(dp , -1 ,sizeof(dp));
        cin>>n>>k;
        cout<<(solve(0 , 0 , 0) + solve(0 , 1, 0))%mod<<endl;     
    }   
    
}