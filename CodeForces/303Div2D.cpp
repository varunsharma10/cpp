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
    int curr = 0;
    int ans = 0;
    queue<ll>q;
    for(int i=0;i<n;i++)
    {   
        cin>>arr[i];
        
    }  
    sort(arr,arr+n); 
    for(int i=0;i<n;i++)
    {
        q.push(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(curr<=q.front())
        {
            ans++;
            curr+=q.front();
            q.pop();
        }
        else
        {
            ll x = q.front();
            q.pop();
            q.push(x);
        }
    }
    cout<<ans<<endl;
        

}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t = 1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}