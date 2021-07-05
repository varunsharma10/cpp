#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n,a,b;
    cin>>n>>a>>b;
    if (a==1)
    {
        if((n-1)%b==0)
        {
            cout<<"Yes"<<endl;
            return;
        }
        else
        {
            cout<<"No"<<endl;
            return;
        }
    }
    ll t = 1;
    while(t<=n)
    {
        if(t%b == n%b)
        {
            cout<<"Yes"<<endl;
            return;
        }
        t*=a;
    }
    cout<<"No"<<endl;
    return;

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