#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int dp[n+1];
    for(int i=0;i<n;i++)
    {
        dp[i] = mod/2;
    }
    dp[0] = 0;
    for(int i=1;i<=n;i++)
    {
        for(int j = max(0,i-k);j<=i;j++)
        {   
            if(s[j] == '1')
            {
                int val = mod/2;
                val = min(val,dp[j]);
                dp[i] = min(dp[i], val+1);  
            }
            
        }
    }
    if(dp[n-1] == mod/2)
    cout<<-1<<endl;
    else
    {
        cout<<dp[n-1]<<endl;
    }

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