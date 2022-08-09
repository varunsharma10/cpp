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
    vector<ll>a,b;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<m;i++)
    {
        ll y;
        cin>>y;
        b.push_back(y);
    }
    
    for(int i=0;i<m;i++)
    {
        auto it = upper_bound(a.begin(),a.end(),b[i]);
        cout<<it - a.begin()<<" ";
    }
    cout<<endl;
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