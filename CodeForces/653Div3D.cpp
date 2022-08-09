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
    ll arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    int maxx = 0;
    for(auto i : arr)
    {
        if(i % k== 0){
            continue;
        }
        ++mp[k - i % k];
        maxx = max(maxx , mp[k-i%k]);
    }
    ll ans=0;
    for(auto t : mp)
    {
        if(t.second == maxx)
        {
            ans = k*1ll*(t.second-1) + t.first + 1; 
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