#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[1001][1001][25][2];
ll b,g,n1,n2;
ll solve(ll b , ll g , ll n , ll x)
{
    if (b==0 && g==0) 
        return 1;

	if (dp[b][g][n][x]!=-1) 
        return dp[b][g][n][x];

	ll ans = 0;
    if(b > 0)
    {
        if(x == 0)
        {
            if(n < n1)
            {
                ans += solve(b-1 , g , n+1 , 0);
            }
        }
        if(x == 1)
        {
            ans += solve(b-1 , g , 1 , 0);
        }
    }
    if(g > 0)
    {
        if (x==1 && n<n2) 
            ans +=  solve(b,g-1,n+1,1);
		if (x==0) 
            ans += solve(b,g-1,1,1);
    }
    return dp[b][g][n][x] = ans;

}
int main()
{
    cin>>b>>g>>n1>>n2;
    memset(dp , -1 , sizeof(dp));
    ll ans = solve(b , g , 0 , 0);
    cout<<ans<<endl;
}