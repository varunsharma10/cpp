#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 301;
double dp[N][N][N];
ll n;
vector<double>arr(n+1);
double solve(int x , int y , int z )
{
    if(x < 0 || y < 0 || z < 0)
        return 0;
    
    if(x == 0 && y == 0 && z == 0)
        return 0;
    
    if(dp[x][y][z] > -0.9)
        return dp[x][y][z];
    
    double exp = n + x*solve(x-1 , y ,z) + y*solve(x+1 , y-1 ,z) + z*solve(x , y +1 ,z-1);

    return dp[x][y][z] = exp/(x+y+z);
}
int main()
{
    // cout<<fixed<<setprecision(8)<<endl;
    cin>>n;
    int one = 0;
    int two = 0;
    int three = 0;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x == 1)
            one++;
        if(x == 2)
            two++;
        if(x == 3)
            three++;
        
    }
    memset(dp , -1 ,sizeof(dp));
    cout<<solve(one , two , three);
}