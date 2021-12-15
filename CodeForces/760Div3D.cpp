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
    sort(arr,arr+n);
    ll ans = 0;
    int m = n - 2*k;
    // cout<<m<<" ";
    for(int i=0;i<m;i++)
    {
        ans+=arr[i];
    }
    for(int i=m;i<n;i++)
    {
        mp[arr[i]]++;
    }
    int x = mp.size();
    
    ll maxx = 0;
    for(auto it : mp)
    {
        if(it.second > maxx)
        {
            maxx = it.second;
        }
    }
    ans += max( 0LL , (maxx - 2*k + maxx)/2);
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