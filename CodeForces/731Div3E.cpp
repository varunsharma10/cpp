#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,k;
    cin>>n>>k;
    int arr[n];
    ll tmp[k];
    vector<ll> dp(n, INT_MAX);
    vector<ll> rdp(n, INT_MAX);
    vector<ll> c(n, INT_MAX);
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
    } 
    for(int i=0;i<k;i++)
    {
        cin>>tmp[i];
    }    
    for(int i=0;i<k;i++)
    {
        c[arr[i] - 1] = tmp[i];
    }
    ll p = INT_MAX;
    for(int i=0;i<n;i++)
    {
        p = min(p+1,c[i]);
        dp[i] = p;
    }  
    ll r = INT_MAX;
    for(int i=n-1;i>=0;i--)
    {   
        r = min(r+1 , c[i]);
        rdp[i] = r;
    }
    for(int i=0;i<n;i++)
    {
        cout<<min(dp[i],rdp[i])<<" ";
    }
    cout<<endl;

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