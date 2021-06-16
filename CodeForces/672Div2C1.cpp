#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,q;
    cin>>n>>q;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }       
    vector<ll>dp1(n+1),dp2(n+2);
    dp1[0] = -(1e18);
    dp2[0] = 0;
    for(int i=0;i<n;i++)
    {
        dp1[i+1] = max(dp1[i] , dp2[i] + arr[i]);
        dp2[i+1] = max(dp2[i] , dp1[i] - arr[i]);
    }
    cout<<max(dp1.back(),dp2.back())<<endl;
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