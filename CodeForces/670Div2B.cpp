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
    ll mx=-1e9;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mx=max(arr[i],mx);
    }
    sort(arr,arr+n,[](long long x,long long y){return abs(x)>abs(y);});
    if(mx<0)
    {
        cout<<arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]*arr[n-5]<<endl;
        return;
    }
    ll ans = arr[0]*arr[1]*arr[2]*arr[3]*arr[4];
    for(int i=5;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            ll tmp = arr[i];
            for(int k=0;k<5;k++)
            {
                if(k!=j)
                {
                    tmp*=arr[k];
                }
            }
            ans=max(ans,tmp);
        }
    }
    cout<<ans<<endl;


    
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