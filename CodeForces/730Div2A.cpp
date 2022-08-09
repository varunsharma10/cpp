#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<"0 0"<<endl;
        return;
    }
    if(a<b)
    {
        ll ans = b-a;
        ll ans2 = min(a%ans , ans - a%ans);
        cout<<ans<<" "<<ans2<<endl;
        return;
    }
    else
    {
        
        ll ans = a-b;
        ll ans2 = min(b%ans , ans - b%ans);
        cout<<ans<<" "<<ans2<<endl;
        return;
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