#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
const ll N = 2*1e5 + 1;
ll dp[N];
void solve()
{    
    ll n;
    cin>>n;
    
    ll arr[n];

    memset(dp,2*1e5+1,sizeof(dp));

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        dp[arr[i]] = i+1;
    }
    ll ans=0;
    for(int i=3;i<2*n;i++)
    {
        for(int j=1;j*j<=i;j++)
        {
            if(i%j==0 && i != j*j)
            {
                if(dp[i/j] + dp[j] == i)
                {
                    ans++;
                }
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