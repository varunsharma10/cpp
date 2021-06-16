#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
bool isPerfectSquare(long double x)
{
    if (x >= 0) {
 
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
void solve()
{    
    ll n;
    cin>>n;
    ll arr[n];
    ll pro=1;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }     
    for(ll i=0;i<n;i++)
    {
        if(!isPerfectSquare(arr[i]))
        {
            cout<<"YES"<<endl;
            return;
        }
    } 
    cout<<"NO"<<endl;
    
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