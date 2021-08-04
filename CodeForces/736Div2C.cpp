#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int cnt[2*100000 + 3];
void solve()
{    
    int n,m;
    cin>>n>>m;
    int ans = 0;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        if(u>v)
        {
            swap(u,v);
        }
        cnt[u]++;
        if(cnt[u] == 1)
        ans++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int tmp;
        cin>>tmp;
        if(tmp == 1)
        {
            int u,v;
            cin>>u>>v;
            if(u>v)
            {
                swap(u,v);
            }
            cnt[u]++;
            if(cnt[u] == 1)
            ans++;
        }
        else if(tmp == 2)
        {
            int u,v;
            cin>>u>>v;
            if(u>v)
            {
                swap(u,v);
            }
            cnt[u]--;
            if(cnt[u] == 0)
            {
                ans--;
            }
        }
        else
        {
            cout<<n-ans<<endl;
        }
    }

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