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
    ll arr[2][n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[0][i];
    }      
    for(int i=0;i<n;i++)
    {
        cin>>arr[1][i];
    }
    pair<ll , ll>d;
    d = {0,0};
    for(int i=0;i<n;i++)
    {
        pair<ll , ll >tmp = {max(d.first,d.second+arr[0][i]) , max(d.second,d.first + arr[1][i])};
        d = tmp;
    }
    cout<<max(d.first,d.second)<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}