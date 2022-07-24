#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 3005;
ll n;
ll arr[N];
ll dp[N][N][2];
ll solve(ll i , ll j , ll turn)
{
    if(i > j)
        return 0;
    
    if(dp[i][j][turn] != -1)
        return dp[i][j][turn];
    
    ll ans = 0;
    if(turn == 1)
        ans = max({arr[i] + solve(i+1 , j , 0) , arr[j] + solve(i , j-1 , 0)});
    else
        ans = min({solve(i+1 , j , 1) , solve(i , j-1 , 1)});

    return dp[i][j][turn] = ans;
}
int main()
{
    cin>>n;
    ll sum = 0;
    memset(dp , -1 ,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    ll X = solve(0 , n-1 , 1);
    ll Y = sum - X;
    cout<<X-Y<<endl;
    // cout<<solve(0 , n-1 , 1)<<endl;

}