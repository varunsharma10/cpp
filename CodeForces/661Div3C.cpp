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
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            v.push_back(arr[i]+arr[j]);
        }
    }
    ll maxi=0;
    sort(arr,arr+n);
    for(int i=0;i<v.size();i++){
        ll x=0;
        ll y=n-1;
        ll sum = v[i];
        ll count=0;
        while(x<y)
        {   
            if(arr[x]+arr[y]==sum)
            {
                count++;
                x++;
                y--;
            }
            else if(arr[x]+arr[y]<sum)
            {
                x++;
            }
            else
            {
                y--;
            }
        }
        maxi=max(maxi,count);
    }
    
   cout<<maxi<<endl;
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