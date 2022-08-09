#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
const int N = 2e5+5;
int pos[N];
void solve()
{    
    int n;
    cin>>n;
    int arr[n];
    int b[n];
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        pos[arr[i]] = i;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        int curr = pos[b[i]] - i;
        if(curr < 0)
        {
            curr+=n;
        }
        mp[curr]++;
    }
    int ans=0;
    for(auto it : mp)
    {
        ans = max(ans,it.second);
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