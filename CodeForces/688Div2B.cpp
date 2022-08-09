#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
const int MAX_N = 200000;
int arr[MAX_N + 5];
void solve()
{    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }       
    ll ans=0;
    for(int i=2;i<=n;i++)
    {
        ans+=abs(arr[i]-arr[i-1]);
    }
    int mx = max(abs(arr[1]-arr[2]),abs(arr[n-1] - arr[n]));
    for(int i=2;i<n;i++)
    {
        mx = max((int)mx, abs(arr[i] - arr[i - 1]) + abs(arr[i + 1] - arr[i]) - abs(arr[i + 1] - arr[i - 1]));
    }
    cout<<abs(ans-mx)<<endl;
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