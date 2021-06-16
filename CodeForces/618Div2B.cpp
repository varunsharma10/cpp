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
    vector<ll>a,b;
    ll arr[2*n];
    for(int i=0;i<2*n;i++)
    {
        cin>>arr[i];
    }       
    sort(arr,arr+2*n);
    if(n%2!=0)
    {
        for(int i=0;i<2*n;i+=2)
        {
            a.push_back(arr[i]);
        }
        for(int i=1;i<2*n;i+=2)
        {
            b.push_back(arr[i]);
        }
    }
    else
    {
        b.push_back(arr[0]);
        for(int i=2;i<2*n;i+=2)
        {
            a.push_back(arr[i]);
        }
        for(int i=1;i<2*n;i+=2)
        {
            b.push_back(arr[i]);
        }
    }
    ll x = (a.size()+1)/2;
    ll y = (b.size()+1)/2;
    cout<<abs(a[x-1]-b[y-1])<<endl;
    
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