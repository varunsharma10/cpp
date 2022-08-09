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
    ll arr[n];
    queue<ll>q;
    set<ll>s;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(!s.count(x))
        {
            if((int)q.size()>=k)
            {
                int tmp = q.front();
                q.pop();
                s.erase(tmp);
            }
            s.insert(x);
            q.push(x);
        }
    }
    vector<ll>ans;
    while(!q.empty())
    {
        ans.push_back(q.front());
        q.pop();
    }
    cout<<ans.size()<<endl;
    for(int i=ans.size()-1;i>=0;i--)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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