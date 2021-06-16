#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll arr[100001];
ll n;
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll l=0;
    ll ans=0;
    while(l<n)
    {
        ll r=l;
        while(r+1 < n && arr[r+1] == arr[l])
        {
            r++;
        }
        ll d = r-l+1;
        ans+=d*(d+1)/2;
        l=r+1;
    }
    cout<<ans<<endl;


}