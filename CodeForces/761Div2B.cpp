#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n;
    cin>>n;
    ll a,b,c;
    if(n%2!=0)
    {
        c = 1;
        ll tmp = (n-1)/2;
        if(tmp % 2 == 0)
        {
            b = tmp + 1;
            a = tmp - 1;
            cout<<a<<" "<<b<<" "<<c<<" "<<endl;
        }
        else
        {
            b = tmp + 2;
            a = tmp - 2;
            cout<<a<<" "<<b<<" "<<c<<" "<<endl;
            return;
        }
    }
    else
    {
        c = 1;
        ll tmp = n/2;
        b = tmp;
        a = tmp - 1;
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
        return;
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