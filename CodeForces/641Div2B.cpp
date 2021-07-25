#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n;
    cin>>n;
    ll arr[n];
    ll dp[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        dp[i] = 1;
    }       
    
    for(int i=1;i<=n;i++)
    {   
        for(int j=i*2;j<=n;j+=i)
        {   
            if(arr[i] < arr[j])
            {   
               dp[j] = max(dp[j],dp[i]+1);
            }
        }
    }
    ll ans = INT_MIN;
    for(int i=1;i<=n;i++)
    {
        ans = max(ans,dp[i]);
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