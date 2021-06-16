#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n,m;
    cin>>n>>m;
    ll arr[n];
    ll arr2[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i]--;
    }       
    sort(arr,arr+n);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    ll ans=0;
    for(int i=n-1;i>=0;i--){

        ans+=arr2[min(arr[i] , n-1-i)];
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