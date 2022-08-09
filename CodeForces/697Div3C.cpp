#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int a,b,k;
    cin>>a>>b>>k;
    vector<pair<int,int>>edge;
    vector<int>dega(a);
    vector<int>degb(b);
    int arr[k];
    int brr[k];
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
    } 
    for(int i=0;i<k;i++)
    {
        cin>>brr[i];
    }
    for(int i=0;i<k;i++)
    {   
        edge.push_back({arr[i],brr[i]});
    }

    for(auto &x : edge)
    {
        x.first--;
        x.second--;
        dega[x.first]++;
        degb[x.second]++;
    }
    ll ans = 0;
    for(auto x : edge)
    {
        ans+= k - dega[x.first] - degb[x.second] + 1;
    }
    cout<<ans/2<<endl;
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