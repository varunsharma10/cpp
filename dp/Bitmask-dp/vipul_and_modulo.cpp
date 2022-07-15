#include<bits/stdc++.h>
using namespace std;
#define ll long long

string s;
ll mod;
ll dp[(1 << 19) + 1][101];

ll solve(ll mask , ll m)
{
    if(mask == (1 << s.size()) - 1)
        return (m == 0);
    
    if(dp[mask][m] != -1)
        return dp[mask][m];
    
    ll ans = 0;
    map<int , int >mp;
    for(int i=0;i<s.size();i++)
    {
        if(i == 0 && mask == 0)
        {
            continue;
        }
        if(((1 << i) & mask ) == 0 && mp[s[i]-'0'] == 0)
        {
            ans += solve((1 << i) | mask , (m*10 + s[i]-'0')%mod);
            mp[s[i]-'0'] = 1;
        }
    }
    return dp[mask][m] = ans;
}
int main()
{
    memset(dp , -1 ,sizeof(dp));
    cin>>s;
    cin>>mod;
    cout<<solve(0 , 0);
}