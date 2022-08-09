#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll pre[1000000],suf[1000000];
void solve()
{    
    int n;
    cin>>n;
    vector<int>row1,row2;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        row1.push_back(tmp);
    }       
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        row2.push_back(tmp);
    }
    for(int i=1;i<=n;i++)
    {
        suf[i] = suf[i-1] + row2[i-1];
    }
    for(int i=1;i<=n;i++)
    {
        pre[i] = pre[i-1] + row1[n-i];
    }
    ll ans = LONG_MAX;
    for(int i=0;i<n;i++)
    {   
        ans = min(ans , max(pre[i] , suf[n-1-i]));
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