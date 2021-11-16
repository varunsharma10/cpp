#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll n,k;
ll bin(ll a, ll b) {
    a %=mod;
    ll out = 1;
    while (b > 0) {
        if (b & 1)out = out * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return out;
}
string toBinary(ll n)
{
    string binary;
    for (unsigned i = (1 << 32 - 1); i > 0; i = i / 2) {
        binary += (n & i) ? "1" : "0";
    }
 
    return binary;
}
void solve()
{    
    

    cin>>n>>k;
    string s = toBinary(k);
    ll tmp = s.size();
    ll ans = 0;
    // reverse(s.begin(),s.end());
    // cout<<s<<" ";
    for(ll i=0;i<tmp;i++){
        if(s[i] =='1'){
            ans = (ans + bin(n,tmp-i-1))%mod;
        }   
    }
    cout<<ans%mod<<endl;
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