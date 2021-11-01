#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n,k;
    cin>>n>>k;
    ll sum = 1;
    ll count = 0;
    while(sum < n && sum <= k)
    {
        sum*=2;
        count++;
        if(sum >= n && sum > k)
            break;
        
            
    }
    if(sum < n)
        count = count + (n - sum + 1 + k-2)/k;

    cout<<count<<endl;  
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