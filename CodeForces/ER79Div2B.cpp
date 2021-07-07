#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n,s;
    cin>>n>>s;
    ll arr[n];
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }  
    if(sum<=s)
    {
        cout<<0<<endl;
        return;
    }
    sum = 0;
    int idx;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>s)
        {
            idx = i;
            break;
        }
    }
    ll maxidx;
    ll maxx = INT_MIN;
    for(int i=0;i<=idx;i++)
    {
        if(arr[i] > maxx)
        {
            maxx = arr[i];
            maxidx = i;
        }
    }
    cout<<maxidx+1<<endl;

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