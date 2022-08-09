#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll n;
vector<ll>v;
void solve()
{    
    cin>>n;
    bool negi = false;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(x<0)
        negi = true;
        v.push_back(x);
        
    }   
    if(negi)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<101<<endl;
        for(int i=0;i<101;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    
    

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