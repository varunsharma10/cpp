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
    vector<ll>arr;
    ll l,r;
    cin>>l>>r;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        arr.push_back(x);
    }   
    sort(arr.begin(),arr.end());
    ll ans = 0;
    for(int i=0;i<n;i++)
    {
        ans+=upper_bound(arr.begin(),arr.end() ,(r-arr[i])) - arr.begin();
        ans-=lower_bound(arr.begin(),arr.end() , l - arr[i]) - arr.begin();
        if (l <= 2 * arr[i] && 2 * arr[i] <= r) {
            ans--;
        }
    }
    cout<<ans/2<<endl;
    
       


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