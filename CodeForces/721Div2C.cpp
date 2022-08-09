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
    map<ll,vector<ll>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]].push_back(i+1);
    }       
    ll ans=0;
    for(auto x:m)
    {
        vector<ll>v = x.second;
        ll pre=0;
        ll curr=0;
        for(auto y:v)
        {
            curr+=pre * (n-y+1);
            pre+=y;
        }
        ans+=curr;
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