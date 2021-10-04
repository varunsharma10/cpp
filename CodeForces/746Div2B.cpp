#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    
    ll n,x;
    cin>>n>>x;
    
    ll arr[n];
    ll b[n];
    ll num;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        b[i] = arr[i];
    }
    sort(b , b+n);
    if(x<=n/2) 
    {
        cout<<"YES"<<endl;
        return;
    }
        
    for(int i=n-x;i<x;i++)
    {
        if(arr[i] == b[i])
        {
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
     
      
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