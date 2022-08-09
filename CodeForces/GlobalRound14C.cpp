#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,m,x;
    cin>>n>>m>>x;
    set<pair<int,int>>s;
    for(int i=1;i<=m;i++)
    {
        s.insert({0,i});
    }      
    int arr[n]; 
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        pair<int,int>p=*s.begin();
        s.erase(p);
        cout<<p.second<<" ";
        s.insert({p.first+arr[i],p.second});
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