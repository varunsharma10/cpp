#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int check(ll k)
{
    int ans = 0;
    for(int i=1;i*i<=k;i++)
    {
        if(i*i <=k && (i+1)*(i+1) > k)
        {
            ans = i;
            break;
        }
    }
    return ans;
}
void solve()
{    
    ll n;  
    cin>>n;
    ll tmp  = sqrtl(n);
    ll ans = ceil((double)sqrtl(n));
    int k = 1;
    tmp=tmp*tmp;
    if(n - tmp == 0) 
    {
        cout<<ans<<" "<<k<<endl;
    }
    else if(n - tmp > ans) 
    {
        ll res = ans*ans;
        cout<< ans <<" "<<res-n+k<<endl;
    }
    else 
    {
        cout<<n-tmp<<" "<<ans<<endl;
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