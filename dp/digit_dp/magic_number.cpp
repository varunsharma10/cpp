#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
ll dp[2001][2][2001][2][2];
string s;
ll d,m;
ll solve(ll pos , ll tight, ll modo , ll even , ll state)
{
    if(pos == s.size())
        return (modo == 0);
    
    if(dp[pos][tight][modo][even][state] != -1)
        return dp[pos][tight][modo][even][state];
    
    ll ans = 0;
    ll end = tight ? (s[pos]-'0') : 9;
    if(state == 0)
    {
        ans = (ans + solve(pos + 1 , tight & (s[pos] == '0') , modo , 0 , state)) % mod;
        for(ll i=1;i<=end;i++)
        {
            if(i != d)
                ans = (ans + solve(pos +1  , tight & ((i) == end) , ((modo*10 + i)%m) , 1 , 1))%mod;
        }
    }
    else
    {
        for(ll i=0;i<=end;i++)
        {
            if(even && i == d)
            {
                ans = (ans + solve(pos +1  , tight & ((i) == end) , ((modo*10 + i)%m) , !even , 1))%mod;
            }
            else if(!even && i != d)
            {
                ans = (ans + solve(pos +1  , tight & ((i) == end) , ((modo*10 + i)%m) , !even , 1))%mod;
            }
        }
    }

    return dp[pos][tight][modo][even][state] = ans;

}
int main()
{   
    cin>>m>>d;
    string a,b;
    cin>>a>>b;
    s = b;
    memset(dp, -1,sizeof(dp));
    ll ans = solve(0 , 1 , 0 , 0 ,0);
    memset(dp , -1 ,sizeof(dp));
    s = a;
    ans = (ans - solve(0 , 1 , 0 ,0 , 0) + mod)%mod;
    // cout<<ans1<<" "<<ans2<<" ";
    int flag = 1;
    ll mm = 0;
    for(int i=0;i<a.size();i++)
    {
        if(i % 2 == 1 && (a[i]-'0') != d)
        {
            flag = 0;
        }
        if(i % 2 == 0 && (a[i]-'0') == d)
        {
            flag = 0;
        }
        mm = (mm*10 + (a[i]-'0'))%m;
    }
    if(flag == 1 && mm == 0)
    {
        cout<<(ans+1)%mod<<endl;
    }
    else
    {
        cout<<(ans)%mod<<endl;
    }
}