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
    ll maxx = INT_MIN;
    ll sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        maxx = max(maxx,arr[i]);
        sum+=arr[i];
    }           
    sum-=maxx;
    cout<< maxx + (sum)/(double)(n-1)<<endl;
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