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
    vector<ll>last(n+1,-1);
    ll ans= n+10;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }       
    for(int i=0;i<n;i++)
    {
        if(last[arr[i]]!=-1)
        {
            ans= min(ans, i - last[arr[i]]+1 );
        }
        last[arr[i]] = i;
    }
    if(ans > n)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
    


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