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
    ll b[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }       
    if(n%2 == 0)
    {
        for(int i=0;i<n;i+=2)
        {
            b[i] = -1 * arr[i+1];
            b[i+1] = arr[i];

            cout<<b[i]<<" "<<b[i+1]<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(int i=0;i<n-3;i+=2)
        {
            b[i] = -1* arr[i+1];
            b[i+1] = arr[i];

            cout<<b[i]<<" "<<b[i+1]<<" ";
        }
        if (arr[n - 1] + arr[n - 2] != 0) 
        {
            cout << arr[n - 1] + arr[n - 2] << ' ' << -arr[n-3] << ' ' << -arr[n-3] << '\n';
        } 
        else if (arr[n - 2] + arr[n-3] != 0) {
            cout << -arr[n - 1] << ' ' << -arr[n-1] <<" " << arr[n - 2] + arr[n-3] << '\n';
        } 
        else 
        {
            cout << -arr[n - 2] << ' ' << arr[n-3] + arr[n - 1]<<' '<< -arr[n - 2] << '\n';
        }
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