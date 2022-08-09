#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[20][5][2];
string s;
ll l,r;
ll solve(int pos , int count , int tight)
{
    if(pos == s.size())
        return 1;

    if(dp[pos][count][tight] != -1)
        return dp[pos][count][tight];
    
    ll en = tight ? s[pos]-'0' : 9;
    ll ans = 0;
    for(ll i=0;i<=en;i++)
    {
        ll newcount = count + (i > 0);
        if(newcount <= 3)
        {
            ans += solve(pos+1 , newcount , (tight & (i == en)));
        }
    }

    return dp[pos][count][tight] = ans;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        l--;
        s = to_string(r);
        memset(dp , -1 ,sizeof(dp));
        ll ans1 = solve(0 , 0 ,1);

        s = to_string(l);
        memset(dp , -1,sizeof(dp));
        ll ans2 = solve(0 , 0 , 1);
        cout<<ans1 - ans2<<endl;
    }
}