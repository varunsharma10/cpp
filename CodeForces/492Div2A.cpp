#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
const ll m = 1e9+5;

void solve()
{    
    ll n;
    cin>>n;
    ll dp[n];
    int arr[5] = {1,5,10,20,100};
    dp[0] = 0;
    for(int i=1;i<=n;i++)
    {
        dp[i] = LONG_MAX;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[j] <= i)
            {
                ll tmp = dp[i-arr[j]];
                if(tmp!=LONG_MAX && tmp + 1 <dp[i])
                {
                    dp[i] = tmp+1;
                }
            }
        }
    }
    cout<<dp[n]<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}