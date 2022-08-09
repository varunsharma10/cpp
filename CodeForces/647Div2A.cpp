#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll  getr(ll a)
{
    while(a%2==0)
        a/=2;

    return a;
}
void solve()
{    
    ll a,b;
    cin>>a>>b;       
    if(a > b)
    swap(a,b);
    ll ans=0;
    ll r= getr(a);
    if(getr(b) != r)
    cout<<-1<<endl;
    else
    {   
        b/=a;
        while(b>=8) 
        {
            ans++;
            b/=8;
        }
        if(b>1)
        ans++;
        cout<<ans<<endl;
    }
    
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