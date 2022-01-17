#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n,h;
    cin>>n>>h;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll l = 1 , r = 1e18;
    while(l <= r)
    {
        ll m = (l+r)/2;
        ll sum = m;
        for(int i=1;i<n;i++)
        {
            sum+= min(m , (arr[i] - arr[i-1]));
        }
        if(sum < h)
        {
            l = m+1;
        }
        else
        {
            r = m-1;
        }
        
    }
    cout<<r + 1<<endl;


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