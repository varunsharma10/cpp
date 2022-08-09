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
    ll arr[n];
    int vis[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }       
    for(int i=0;i<n;i++)
    {
        cin>>vis[i];
    }
    vector<int>ans;
    for(int i = 0;i<n;i++)
    {
        if(vis[i] == 0)
        {
            ans.push_back(arr[i]);
        }
    }
    sort(ans.begin(),ans.end(),greater<int>());
    int tmp = 0;
    for(int i = 0;i<n;i++)
    {
        if(vis[i] == 0)
        {
            cout<<ans[tmp]<<" ";
            tmp++;
        }
        else
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
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