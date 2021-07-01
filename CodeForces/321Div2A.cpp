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
    ll arr[n];
    int dp[n+1];
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        dp[i] = 1;
    }
    int ans = INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1] <= arr[i])
        {
            dp[i] += dp[i-1];
            
        }
        else
        {
            dp[i] = 1;
        }
        ans = max(ans,dp[i]);
    }
    cout<<ans<<endl;
   
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t = 1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}