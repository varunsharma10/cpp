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
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    if(n <= 2)
    {
        cout<<"NO"<<endl;
        return;
    }
    sort(arr , arr+n);
    ll red = arr[n-1];
    ll blue = arr[0] + arr[1];
    ll i = n-2;
    ll j = 2;
    if(red > blue)
    {
        cout<<"YES"<<endl;
        return;
    }
    while(j < i)
    {
        // cout<<red<<" "<<blue<<" ";
        red += arr[i];
        blue += arr[j];
        if(red > blue)
        {
            cout<<"YES"<<endl;
            return;
        }
        i--;
        j++;
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