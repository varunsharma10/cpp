#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll n;
    cin>>n;
    map<ll,ll>mp;
    vector<ll>v;
    v.push_back(1);
    ll premode=1;
    for(ll i=2;i<=n-1;i++)
    {   
        if(__gcd(n,i)==1)
        {
            v.push_back(i);
            mp[i]++;
        }
        
    }
    for(ll i=0;i<v.size();i++)
    {
        premode=(premode*v[i])%n;
    }
    if(mp.find(premode)!=mp.end())
    {
        sort(v.begin(),v.end());
        cout<<v.size()-1<<endl;
    
    for(ll i=0;i<v.size();i++)
    {
        if(v[i]!=premode)
        {
            cout<<v[i]<<" ";
        }
       
    }
     cout<<endl;
    }
    else
    {
        sort(v.begin(),v.end());
        cout<<v.size()<<endl;
        for(ll i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    

}