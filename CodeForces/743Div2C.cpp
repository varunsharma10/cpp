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
    vector<vector<int>>g(n);
    vector<int>deg(n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        while(x--)
        {
            int j;
            cin>>j;
            --j;
            g[j].push_back(i);
            deg[i]++;
        }
    }       
    set<int>s;
    for (int i = 0; i < n; i++) {
        if (deg[i] == 0) {
            s.insert(i);
        }
    }
    int ans = 1;
    int last = -1;
    for(int i=0;i<n;i++)
    {
        if(s.empty())
        {
            ans = -1;
            break;
        }
        auto it = s.lower_bound(last);
        if(it == s.end())
        {
            ans++;
            it = s.begin();
        }
        int idx = *it;
        s.erase(idx);
        for(int j : g[idx])
        {
            --deg[j];
            if(deg[j] == 0)
            {
                s.insert(j);
            }
        }
        last = idx;
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