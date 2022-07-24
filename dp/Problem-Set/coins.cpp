#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 3005;
double dp[N][N];
ll n;
vector<double>arr(n+1);
double solve(int i , int x)
{
    if(x <= 0)
        return 1;
    if(i == 0)
        return 0;
    
    if(dp[i][x] > -0.9)
        return dp[i][x];

    return dp[i][x] = arr[i]*solve(i-1 , x-1) + (1-arr[i])*solve(i-1 , x);
}
int main()
{
    // cout<<fixed<<setprecision(8)<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    memset(dp , -1 ,sizeof(dp));
    cout<<solve(n , (n+1)/2);
}