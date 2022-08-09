#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int r,g,b;
    cin>>r>>g>>b;
    int x = max(r,max(g,b));
    if(x == r)
    {
        if(x >= g+b)
        {
            cout<<g+b<<endl;
            return;
        }
    }
    else if(x == g)
    {
        if(x >= r+b)
        {
            cout<<r+b<<endl;
            return;
        }
    }
    else
    {
        if(x >= r+g)
        {
            cout<<r+g<<endl;
            return;
        }
    }
    cout<<(r+b+g)/2<<endl;

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