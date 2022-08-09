#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n,m;
    cin>>n>>m;
    ll x ,y;
    cin>>x>>y;
    ll ans1,ans2;
    ll ans3,ans4;
    ll a,b,c,d;
    a = abs(x-1) + abs(y-1);
    b = abs(x-n) + abs(y-1);
    c = abs(x-1) + abs(y-m);
    d = abs(x-n) + abs(y-m);
    ll k =max(a,max(max(b,c),d));
    if(k == a)
    {
        ans1 = 1;
        ans2 = 1;
    }
   if(k == b)
    {
        ans1 = n;
        ans2 = 1;
    }
    if(k == c)
    {
        ans1 = 1;
        ans2 = m;
    }
    else
    {
        ans1 = n;
        ans2 = m;
    }

    if(ans1 = 1)
    {
        ans3 = n;
    }
    else if(ans1 = n)
    {
        ans3 = 1;
    }

    if(ans2 == 1)
    {
        ans4 = m;
    }
    else
    {
        ans4 = 1;
    }

    if(ans3 == x && ans4 == y)
    {
        if(ans3+1 < n )
        {
            ++ans3;
        }
        else if(ans4+1 < m)
        {
            ++ans4;
        }
    }
    cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4<<endl;
      
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