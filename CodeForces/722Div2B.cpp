#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n;
    cin>>n;
    ll arr[n];
    vector<ll>zero;
    vector<ll>negi;
    vector<ll>posi;
    ll maxi=INT_MIN;
    ll mini=INT_MAX;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        
        if(arr[i]<=0)
        negi.push_back(arr[i]);
        
        if(arr[i]>0)
        posi.push_back(arr[i]);

    
    }    
    sort(negi.begin(),negi.end());  
    sort(posi.begin(),posi.end());
    ll mn=20000000010;
    for(int i=1;i<negi.size();i++)
    {
        if(mn>abs(negi[i]-negi[i-1]))
            mn=abs(negi[i]-negi[i-1]);
    }
    ll a=0;
    if(posi.size()>=1 && posi[0]<=mn)
        a++;
   
   cout<<a+negi.size()<<endl;
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