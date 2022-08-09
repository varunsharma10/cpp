#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    string s;
    cin>>s;
    ll q;
    cin>>q;
    vector<ll>dp(s.size() , 0);
    vector<ll>sum;
    for(int i=1;i<s.size();i++)
    {   
        dp[i] = dp[i-1];
        if(s[i] == s[i-1])
        {
            dp[i]++;            
        }
    }
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        ll ans=0;
        ans = dp[y-1] - dp[x-1];
        cout<<ans<<endl;
    }
}