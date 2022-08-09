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
    map<ll,vector<ll>>mp;
    vector<ll>u(n),s(n);
    for(int i=0;i<n;i++)
    {
        cin>>u[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        mp[u[i]-1].push_back(s[i]);
    }
    vector<vector<ll>>z,az;
    vector<ll>ans(n,0);
    for(auto i : mp)
    {
        az.push_back(i.second);
        sort(az.back().begin(),az.back().end());
    }
    for(auto i : az){
        vector<ll>other;
        for(int j=0;j<(int)i.size();j++)
        {
            if(j==0)
            other.push_back(i[j]);
            else
            other.push_back(other.back()+i[j]);
        }
        z.push_back(other);
    }
    for(auto i: z)
    {
        for(int j=1;j<=(int)i.size();j++){
            int left=i.size() % j;
            ll del=0;
            if(left>0) del=i[left-1];
            ans[j-1]+=(i.back() - del);
        }
    
    }
    for(auto i : ans) cout<<i<<" ";
    cout<<"\n";

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