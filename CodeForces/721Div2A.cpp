#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll setBitNumber(ll n)
{
 
    ll k = (int)(log2(n));
 
    return 1 << k;
}
void solve()
{    
    ll n;
    cin>>n;
    ll x= setBitNumber(n);
    ll ans = log2(x);
    int count=0;
    for(int i=0;i<ans;i++)
    {
        count+=pow(2,i);
    }
    cout<<count<<endl;
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