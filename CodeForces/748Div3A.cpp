#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans1 = 0;
    ll ans2 = 0;
    ll ans3 = 0;
    ll tmp = 0;
    cout << max(tmp,1+max(b,c)-a) <<" "<< max(tmp,1+max(a,c)-b) <<" "<< max(tmp,1+max(b,a)-c) << endl;

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