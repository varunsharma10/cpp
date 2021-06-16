#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll x,y;
    cin>>x>>y;
    ll a,b;
    cin>>a>>b;
    if(x<y)
    {
        swap(x,y);
    }       
    if(2*a<=b)
    {
        cout<<(x+y)*a<<endl;
    }
    else
    {
        cout<<y*b + (x-y)*a<<endl;
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