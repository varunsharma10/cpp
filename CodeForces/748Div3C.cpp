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
    cin >> n >> k;
    int arr[k];
    for(ll i = 0 ; i < k ; i++) 
    {
        cin >> arr[i];
    }
    sort(arr,arr+k);
    ll res=0,count=0;
    for(int i=k-1; i>=0; i--) 
    {
        if(res+ n - arr[i] > n) {
            break;
        } 
        else
        {
            res+=n-arr[i];
            count++;
        }
    }
    int ans=count,pos=0,idx=k-count;
    for(int i=k-count; i<k; i++) 
    {
        if(pos < arr[i]) 
        {
            
        }
        else
        {
            ans--;
            pos+=n-arr[idx++];
        }
        pos+=n-arr[i];
    }
    cout<<ans<<endl;
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