#include<bits/stdc++.h>
using namespace std;
#define ll long long
pair<string ,ll> dp[21][6][3][11];
string a,b;
ll l,r;
pair<string ,ll> solve(ll pos , ll t1 , ll t2 , ll state)
{
    if(pos == b.size())
        return {"",1};
    
    if(dp[pos][t1][t2][state].second != -1)
        return dp[pos][t1][t2][state];
    
    ll st = t1 ? (a[pos]-'0') : 0;
    ll end = t2 ? (b[pos]-'0') : 9;
    ll ans = -1;
    string res = "";
    for(ll i = st;i<=end;i++)
    {
        ll val = 0;
        if(state == 0 && i == 0)
            val = 1;
        else
            val = i;
        
        auto it = solve(pos+1 , (t1 & ((st) == i)) , (t2 & ((end) == i)) , state | (i > 0));

        if(ans < val*it.second)
        {
            ans = val*it.second;
            if(state == 0 && i == 0)
                res = it.first;
            else
            {
                reverse(it.first.begin() , it.first.end());
                it.first.push_back('0' + i);
                reverse(it.first.begin() , it.first.end());
                res = it.first;
            }
        }
    }
    return dp[pos][t1][t2][state] = {res , ans};
}
int main()
{
    cin>>a>>b;
    for(int i=0;i<=20;i++)
    {
        for(int j=0;j<=2;j++)
        {
            for(int k=0;k<=2;k++)
            {
                for(int l=0;l<=2;l++)
                {
                    dp[i][j][k][l].second = -1;
                }
            }
        }
    }
    reverse(a.begin() , a.end());
    while(a.size() < b.size())
    {
        a.push_back('0');
    }
    reverse(a.begin() , a.end());
    cout<<solve(0 , 1 ,1 ,0).first<<endl;
}