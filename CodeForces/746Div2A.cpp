#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,h;
    cin>>n>>h;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr , arr + n , greater<int>());
    // int sum = accumulate(arr , arr+n , 0);
    ll maxx = arr[0];
    ll maxx2 = arr[1];
    double x = 1.0;
    ll tmp1 = ceil((h + maxx2) * x / (maxx + maxx2));
    ll tmp2 = ceil(h * x / (maxx + maxx2));
    ll ans1 = 2 * tmp1 - 1;
    ll ans2 = 2 * tmp2;
    cout<<min(ans1,ans2)<<endl;
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