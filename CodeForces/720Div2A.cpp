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
    ll x,y,z;
    x=a;
    if(b==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(b<=2)
    {
        z=a*3;
        y=a*2;
    }
    else
    {
        z=a*b;
        y=a*(b-1);
    }
    cout<<"YES"<<endl;
    cout<<x<<" "<<y<<" "<<z<<" ";
    cout<<endl;
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