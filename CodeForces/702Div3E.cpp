#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n;
    cin>>n;
    ll arr[n];
    ll sum =0;
    vector<pair<ll,ll>>p;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        p.push_back({arr[i] , i+1});
        sum+=arr[i];
    }       
    sort(p.begin(),p.end());
    ll c=1;
    for(int i=n-2;i>=0;i--)
    {
        sum-=p[i+1].first;
        if(sum<p[i+1].first)
        {
            break;
        }
        else
        {
            c++;
        }
        
    }
    vector<ll>ans;
    for(int i=n-1;i>=n-1-c+1;i--)
    {
        ans.push_back(p[i].second);
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
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