#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll a,b,c,d;
bool check(ll a, ll b, ll c, ll d)
{
    if(a%2 + b%2 + c%2 + d%2 > 1)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}
void solve()
{    
       cin>>a>>b>>c>>d;
       ll k=min(a,min(b,c));
       k=min(k,(ll)1);
       if(check(a,b,c,d))
       {
           cout<<"Yes"<<endl;
       }
       else if(k== 1 && check(a-1,b-1,c-1,d+1))
       {
           cout<<"Yes"<<endl;
       }
       else
       {
           cout<<"No"<<endl;
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