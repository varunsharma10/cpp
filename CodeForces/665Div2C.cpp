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
    ll mini = 1000000000;
    ll b[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        b[i] = arr[i];
        mini = min(mini,arr[i]);
    }       
    sort(b,b+n);
    int ok = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != b[i] && arr[i] %mini > 0)
        {
            ok = 1;
        }
    }
    if(ok)
    {
        cout<<"NO"<<endl;
    }
    else
    cout<<"YES"<<endl;

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