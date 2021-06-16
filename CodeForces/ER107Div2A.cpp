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
    ll arr[n];
    ll up=0,down=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }      
    for(ll i=0;i<n;i++)
    {
        if(arr[i]==1)
        up++;
        if(arr[i]==2)
        down++;
        if(arr[i]==3)
        {
            up++;
        }
    }
    cout<<up<<endl;
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