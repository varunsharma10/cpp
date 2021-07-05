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
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    if(n/2 >= m)
    {
        cout<<m+1<<endl;
    }
    else
    {
        cout<<m-1<<endl;
    }

}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}