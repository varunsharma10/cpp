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
    ll s[2];
    s[0]=0;
    s[1]=1;
    for(int i=0;i<n;i++)
    {
        s[i%2] += arr[i];
    }
    ll p=0;
    if(s[0]>s[1])
    {
        p=1;
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==p)
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<arr[i]<<" ";
        }
        
    }
    cout<<endl;
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