#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll getlen(ll a)
{
    ll count=0;
    while(a>0)
    {   
        count++;
        a = a/10;
    }
    return count;
}
void solve()
{    
    ll A,B;
    cin>>A>>B;
    B+=1;
    ll ans = A*(getlen(B) - 1);
    cout<<ans<<endl;
    
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