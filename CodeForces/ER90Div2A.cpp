#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll a,b,c;
    cin>>a>>b>>c;
    int x=-1;
    int y=-1;
    if(a<c)
    {
        x=1;
    }      
    if(c<a*b)
    {
        y=b;
    }
    cout<<x<<" "<<y<<endl;
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