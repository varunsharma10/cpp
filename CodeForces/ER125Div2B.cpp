#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n,b,x,y;
    cin>>n>>b>>x>>y;
    ll sum = 0;
    ll ans = 0;
    for(int i=0;i<n;i++)
    {
        if(sum + x > b)
        {
            sum-=y;
        }
        else
        {
            sum+=x;
        }
        ans+=sum;
    }       
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