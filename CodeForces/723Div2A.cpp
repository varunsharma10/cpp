#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n;
    cin>>n;
    ll arr[2*n];
    for(int i=0;i<2*n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+2*n);
    for(int i=1;i<n;)
    {
        swap(arr[i],arr[2*n-i-1]);
        i=i+2;
    }
    for(int i=0;i<2*n;i++)
    {
        cout<<arr[i]<<" ";
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