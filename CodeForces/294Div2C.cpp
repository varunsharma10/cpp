#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,m;
    cin>>n>>m;
    int ans = 0;
    int curr = 0;
    for(int i=0;i<=n;i++)
    {
        curr = i;
        int leftn = n-i;
        int leftm = m - (2*i);
        if(leftm>=0)
        {
            curr+=min(leftm,leftn/2);
            ans = max(ans,curr);
        }
    }
    cout<<ans<<endl;
    

}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t =1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}