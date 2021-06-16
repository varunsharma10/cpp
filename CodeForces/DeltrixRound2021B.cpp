#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }  
    cout<<3*n<<endl;
    for(int i=1;i<=n;i+=2)
    {
        cout<<1<<" "<<i<<" "<<i+1<<" "<<endl;
        cout<<2<<" "<<i<<" "<<i+1<<" "<<endl;
        cout<<1<<" "<<i<<" "<<i+1<<" "<<endl;
        cout<<2<<" "<<i<<" "<<i+1<<" "<<endl;
        cout<<1<<" "<<i<<" "<<i+1<<" "<<endl;
        cout<<2<<" "<<i<<" "<<i+1<<" "<<endl;
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