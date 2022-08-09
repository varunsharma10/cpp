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
    ll arr[n];
    ll b[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    for(int i=0;i<n;i++){
        cin>>b[i];
    }   
    vector<ll>c(n); 
    for(int i=0;i<n;i++)
    {
        c[i] = arr[i] - b[i];
    }
    ll ans = 0;
    sort(c.begin(),c.end());
    for(int i=0;i<n;i++)
    {
        if(c[i] <= 0)
        {
            continue;
        }
        int pos = lower_bound(c.begin(),c.end() , -c[i] + 1) - c.begin();
        ans+= i - pos;

    }
    cout<<ans<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}