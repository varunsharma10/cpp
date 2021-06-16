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
    ll check[n];
    vector<ll>v;
    memset(check,0,sizeof(check));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }       
    ll ans=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
           ans+=arr[i-1]-arr[i];
        }
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