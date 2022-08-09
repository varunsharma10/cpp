#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll n;
    cin>>n;
    ll x;
    cin>>x;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(x>1)
        {
            ans+=x*arr[i];
            --x;
        }
        else if(x==1)
        {
            ans+=x*arr[i];
        }
    }
    cout<<ans<<endl;
}