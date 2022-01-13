#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n,l ,k;
    cin>>n>>l>>k;
    vector<ll>a(n+2 , 0) , b(n+2 , 0);
    for(ll i=1;i<=n;i++)
        cin>>a[i];
        
    for(ll i=1;i<=n;i++)
        cin>>b[i];

    ll inf  = 1000000000000000005;
    vector<vector<ll>>dp(n+5 , vector<ll>(n+5 , inf));
    a[n+1] = l;
    dp[1][0] = 0;
    for(ll i=2;i<=n+1;i++)
    {
        for(ll j=0;j<=k;j++)
        {
            if(j == 0)
            {
                dp[i][j] = (a[i] - a[i-1])*b[i-1] + dp[i-1][j];
                // cout<<dp[i][j]<<" ";
                continue;
            }

            for(ll prev=i-1;prev>0;prev--)
            {
                ll rem = i - prev - 1;
                if(j >= rem)
                {
                    dp[i][j] = min( (dp[prev][j - rem] + (a[i] - a[prev])*b[prev]) , dp[i][j]);
                }
            }
        }
    }
    ll ans = inf;
    for(int i=0;i<=k;i++)
    {
        // cout<<dp[n+1][i]<<" ";
        ans = min(ans , dp[n+1][i]);
    }
    cout<<ans<<endl;

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