#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n,k;
    cin>>n>>k;
    ll tmp1=k/n;
    ll tmp2;
    while(tmp1)
    {
        tmp2=k;
        k+=tmp1;
        tmp1=(k/n) -(tmp2/n);
    }
    cout<<k<<endl;
    
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