#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll pf[200000][27];
void solve()
{
    ll n,q;
    cin>>n>>q;
    ll cnt[27];
    memset(cnt , 0 ,sizeof(cnt));
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        ++cnt[s[i]-'a'];
        for(int j=0;j<26;j++)
        {
            pf[i][j] = cnt[j];
        }
    }
   for(int i=0;i<q;i++)
    {
        ll x ,y;
        cin>>x>>y;
        --x;
        --y;
        ll ans =0;
        for(int j=0;j<26;j++)
        {
            int c = pf[y][j];
            if(x>0)
            {
                c-=pf[x-1][j];
            }
            ans+= c*(j+1);
        }
        cout<<ans<<endl;
    }
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    solve();
    
}