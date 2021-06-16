#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    ll mx = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        mx = max(mx,arr[i]);
    }       

    ll x = (sum + n-2)/(n-1);
    ll k = max(x,mx);
    cout<<(n-1)*k - sum<<endl;
    


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