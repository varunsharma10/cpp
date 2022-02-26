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
    int arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }       
    int ans = mp[4];
    ans+= mp[3];
    mp[1] -= mp[3];
    ans += mp[2]/2;
    mp[2] = mp[2]%2;
    if(mp[2])
    {
        ans++;
        mp[1]-=2;
    }
    if(mp[1] > 0)
    {
        ans+= (mp[1]-1)/4+1;
    }
    cout<<ans<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}