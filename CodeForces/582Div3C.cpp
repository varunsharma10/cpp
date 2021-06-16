#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n,m;
    cin>>n>>m;
    vector<ll>digit;
    n=n/m;
    ll ans=0;
    for(int i=0;i<10;i++)
    {
        digit.push_back((i+1)*m % 10);
        ans+=digit[i];
    }     
    ll sum=0;
    for(int i=0;i<n%10;i++)  
    {
        sum+=digit[i];
    }
    cout<<sum + n/10 * ans<<endl;

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