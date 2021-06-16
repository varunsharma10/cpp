#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
bool isPrefectSquare(ll n)
{
    if(n>=0)
    {
        ll sr = sqrt(n);
        return(sr*sr==n);
    }
    return false;
}
void solve()
{    
    ll n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    ll z=n/2;
    if(isPrefectSquare(z))
    {
        cout<<"YES"<<endl;
        return;
    }
    else if(n%4!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    z=n/4;
    if(isPrefectSquare(z))
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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