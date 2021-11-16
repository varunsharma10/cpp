#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll x,d;
    cin>>x>>d;
    vector<ll>res;
    ll ans = x;
    for(ll i = 1 ; i <= 4 ; i++) 
    {
        ll minn=i;
        if(ans%2 != 0) 
        {
            ans+=minn;
        } 
        else 
        {
            ans-=minn;
        }
        res.push_back(ans);
    }
    ll tmp = d%4;
    if(tmp == 0 || tmp == 2) 
    {
        if(tmp == 0)
            tmp+=4;

        cout << res[tmp-1] << endl;
    } 
    else 
    {
        if(tmp==1) 
        {
            d--;
            ll rem = d/4.0;
            if(x%2 == 0) 
            {
                cout << res[tmp-1]-rem*4 << endl;
            } 
            else 
            {
                cout << res[tmp-1]+rem*4 << endl;
            }
        } 
        else 
        {
            d--;
            ll rem = d/4.0;
            if(x % 2 == 0) 
            {
                cout << res[tmp-1]+rem*4 << endl;
            } 
            else 
            {
                
                cout << res[tmp-1]-rem*4 << endl;
            }
        }
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