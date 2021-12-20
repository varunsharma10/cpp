#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll w,h;
    cin>>w>>h;
    vector<ll>xs1 , xs2;
    vector<ll>ys1 , ys2;   

    ll k1;
    cin>>k1;
    for(ll i=0;i<k1;i++)
    {
        ll tmp;
        cin>>tmp;
        xs1.push_back(tmp);
    }

    ll k2;
    cin>>k2;
    for(ll i=0;i<k2;i++)
    {
        ll tmp;
        cin>>tmp;
        xs2.push_back(tmp);
    }

    ll k3;
    cin>>k3;
    for(ll i=0;i<k3;i++)
    {
        ll tmp;
        cin>>tmp;
        ys1.push_back(tmp);
    }

    ll k4;
    cin>>k4;
    for(ll i=0;i<k4;i++)
    {
        ll tmp;
        cin>>tmp;
        ys2.push_back(tmp);
    }

    ll ans1 = h*(max(xs1[k1-1]-xs1[0] , xs2[k2-1] - xs2[0]));
    ll ans2 = w*(max(ys1[k3-1] - ys1[0] , ys2[k4-1] - ys2[0]));
    cout<<max(ans1,ans2)<<endl;
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