#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{
    ll n,k,x;
    cin>>n>>k>>x;
    ll arr[n];
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll ans = 1;
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1] - arr[i] > x)
        {
            v.push_back(arr[i+1] - arr[i]-1);
            ans++;
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(v[i]/x <=k)
        {
            k-=v[i]/x;
            ans--;
        }
        else
        {
            break;
        }
        
    }
   cout<<ans<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    solve();
}