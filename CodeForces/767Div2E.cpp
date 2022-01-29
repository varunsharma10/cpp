#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n;
    cin>>n;
    ll grid[n+2][n+2];
    for(ll i =0;i<n+2;i++)
    {
        for(ll j=0;j<n+2;j++)
        {
            grid[i][j] = 0;
        }
    }     
    ll x;  
    ll ans = 0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            cin>>x;
            if(!grid[i-1][j] && !grid[i+1][j] && !grid[i][j+1] && !grid[i][j-1])
            {
                ans^=x;
                grid[i-1][j]++;
                grid[i][j-1]++;
                grid[i+1][j]++;
                grid[i][j+1]++;
            }  
        }
       
    }
    cout<<ans<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}