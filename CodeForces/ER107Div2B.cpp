#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll digits(ll n)
{   
    ll s=0;
    while(n>0)
    {
        n=n/10;
        s++;
    }
    return s;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t;
    cin>>t;
    vector<ll>v;
    v.push_back(1);
    v.push_back(11);
    v.push_back(101);
    v.push_back(1009);
    v.push_back(10007);
	v.push_back(100003);
	v.push_back(1000003);
	v.push_back(10000019);
	v.push_back(100030001);
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
    
        ll z=v[c-1];
        ll x=z;
        ll y=z;
        while(digits(z)!=a)
        {
            z=z*2;
            x=z;
        }
        z=v[c-1];
        while(digits(z)!=b)
        {
            z=z*3;
            y=z;
        }
        cout<<x<<" "<<y<<" "<<endl;
    }
}