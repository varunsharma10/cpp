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
    ll arr[n+2];
    for(int i=0;i<n+2;i++)
    {
        cin>>arr[i];
    }       
    sort(arr,arr + n+2);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    ll a = arr[n];
    ll b = arr[n+1];

    if(sum == a || sum == b)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }    
    else
    {   
        bool ok = false;
        for(int i=0;i<n;i++)
        {
            if(sum - arr[i] + a == b)
            {
                ok = true;
                arr[i] = a;
                break;
            }
        }
        if(ok)
        {
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<-1<<endl;
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