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
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]-i;
    }       
    ll count=0;
    for(int i=0;i<n;i++)
    {       
        mp[arr[i]]++;
    }
    for(auto x:mp)
    {
        if(x.second>=2)
        {
            ll k = (x.second)*(x.second-1);
            count+=(k/2);
        }
    }
    cout<<count<<endl;
 
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