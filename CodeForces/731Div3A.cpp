#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int xa,ya;
    int xb,yb;
    int xf,yf;
    cin>>xa>>ya>>xb>>yb>>xf>>yf;
    int ans = abs(xa-xb) + abs(ya-yb);
    if(xa == xb)
    {
        if(xa == xf && yf < max(ya,yb) && yf > min(ya,yb) )
        {
            ans+=2;
        }
    }
    if(ya == yb)
    {
        if(ya == yf && xf < max(xa,xb) && xf > min(xa,xb))
        {
            ans+=2;
        }
    }
    cout<<ans<<endl;       
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