#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        p.push_back(make_pair(a,b));
    }
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        int mx=0;
        for(int j=0;j<n;j++)
        {
           mx = max(mx,abs(p[i].first - p[j].first) + abs(p[i].second - p[j].second));
        }
        if(mx<=k)
        {
            ans=1;
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