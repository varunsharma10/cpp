#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll countD(ll a)
{   
    ll count = 0;
    for(int i=1;i * 1ll * i<=a;i++)
    {   
        if(a%i==0)
        {
            ++count;
            if (i != a / i) 
            {
				++count;
			}
        }
    }
   
    return count;
}
void solve()
{    
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    ll gcd = 0;
    for(int i=0;i<n;i++)
    {
        gcd = __gcd(arr[i],gcd);
    }
    cout<<countD(gcd)<<endl;
    
    
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}