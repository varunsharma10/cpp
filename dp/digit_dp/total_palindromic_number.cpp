#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
ll dp[21][2][2][2][2][11][11];
string s;
ll solve(ll pos , ll tight , ll state , ll even , ll odd , ll last , ll slast)
{
    if(pos == s.size())
        return (even == 1 && odd == 1);
    
    if(dp[pos][tight][state][even][odd][last][slast] != -1)
        return dp[pos][tight][state][even][odd][last][slast];
    
    ll en = tight ? (s[pos]-'0') : 9;
    ll ans = 0;
    if(state == 0)
    {
        ans = solve(pos+1 , tight & (s[pos] == '0') ,state, even , odd , last , slast);
        for(int i=1;i<=en;i++)
        {
            ans += solve(pos+1 , tight & (i == en) , 1 ,even , odd , i, slast);
        }
    }
    else
    {
        for(int i=0;i<=en;i++)
        {
            ans += solve(pos+1 , tight & (i == en) , 1 , even | (i == last) , odd | (i == slast) ,i , last);
        }
    }
    return dp[pos][tight][state][even][odd][last][slast] = ans;

}
int main()
{   
    ll t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        s = b;
        memset(dp , -1 ,sizeof(dp));
        ll ans = solve(0,1,0,0,0,10,10);
        // cout<<ans<<" ";
        s = a;
        memset(dp , -1 ,sizeof(dp));
        ans -= solve(0,1,0,0,0,10,10);
        cout<<ans<<endl;
    }
}