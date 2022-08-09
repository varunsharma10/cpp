#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }       
    for(int i=0;i<n-1;i++)
    {
        if(arr[i] == arr[i+1])
        {
            cout<<0<<endl;
            return;
        }
    }
    ll even = arr[0];
    ll odd = arr[1];
    for(int i=2;i<n;i++)
    {
        if(i % 2 == 0)
        {
            even = __gcd(even , arr[i]);
        }
        else
        {
            odd = __gcd(arr[i] , odd);
        }
    }
    int f = 1;
    for(ll i=1;i<n;i+=2) 
    {
        if(arr[i]%even==0)
        f = 0;
    }
    if(f)
    {
        cout<<even<<"\n";
        return;
    }
    else 
    {
        f = 1;
        for(ll i=0;i<n;i+=2) 
        {
            if(arr[i]%odd==0)
            f = 0;
        }
        if(f)
        {
            cout<<odd<<"\n";
            return;
        }
        
    }
    cout<<0<<endl;
    return;

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