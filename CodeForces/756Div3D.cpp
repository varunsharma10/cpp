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
    int arr[n+1];
    int p[n+1];
    int root = -1;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i] == i)
            root = i;
    }       
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    vector<int>ans(n+1);
    vector<int>dis(n+1 , -1);
    dis[root] = 0;
    if(p[1] != root)
    {
        cout<<-1<<endl;
        return;
    }
    for(int i=2;i<=n;i++)
    {
        int node = p[i];
        int parent = arr[node];

        if(dis[parent] == -1)
        {
            cout<<-1<<endl;
            return;
        }

        dis[node] = i -1;
        ans[node] = dis[node] - dis[parent];

    }
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
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