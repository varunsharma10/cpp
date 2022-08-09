#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100005;
ll n;
ll a[N],b[N],c[N];
ll dp[N][2][2][2];
ll solve(ll i , ll a1 , ll b1 , ll c1)
{
    if(i >= n)
        return 0;

    if(dp[i][a1][b1][c1] != -1)
        return dp[i][a1][b1][c1];
    
    ll ans = INT_MIN;
    if(a1 == 1)
    {
        ans = max({ans , solve(i+1 , 0 , 1, 0) + b[i] , solve(i+1 , 0 , 0 , 1) + c[i]});
    }
    else if(b1 == 1)
    {
        ans = max({ans , solve(i+1 , 1 , 0 , 0) + a[i] , solve(i+1 , 0 , 0 , 1) + c[i]});
    }
    else if(c1 == 1)
    {
        ans = max({ans , solve(i+1 , 1 , 0, 0) + a[i] , solve(i+1 , 0 , 1 , 0) + b[i]});
    }

    return dp[i][a1][b1][c1] = ans;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    memset(dp , -1 ,sizeof(dp));
    cout<<max({solve(1,1,0,0) + a[0] , solve(1 , 0 , 1 ,0) + b[0] , solve(1,0,0,1) + c[0]});
}