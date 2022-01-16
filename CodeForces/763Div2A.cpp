#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,m,r,c,dr,dc;
    int count =0;
    cin>>n>>m>>r>>c>>dr>>dc;
    int ans1,ans2;
    if(r <= dr)
    {
        ans1 = dr - r;
    }
    else
    {
        ans1 = 2*n - r - dr;
    }
    if(c <= dc)
    {
        ans2 = dc - c;
    }
    else
    {
        ans2 = 2*m - c - dc;
    }
    cout<<min(ans1,ans2)<<endl;
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