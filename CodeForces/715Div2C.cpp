#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
vector<ll>v;
ll dp[2005][2005];
ll fun(int L,int R) {
    if(L <= R) {
        if(dp[L][R] != -1) {
            return dp[L][R];
        }
        ll ans1 = fun(L+1,R);
        ll ans2 = fun(L,R-1);
        dp[L][R] = v[R]-v[L]+min(ans1,ans2);
        return dp[L][R];
    }
    else {
        return 0;
    }
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll n;
    cin>>n;
    ll ans=0;
    vector<ll>s(n);
    for(ll i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    v = s;
    memset(dp,-1,sizeof(dp));
    ans=fun(0,n-1);
    cout<<ans<<endl;
}