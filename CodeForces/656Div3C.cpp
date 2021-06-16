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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    bool dec=false;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i-1]>arr[i] && dec==true)
        {
            ans++;
            break;
        }
        else if(arr[i-1]<arr[i])
        {
            dec=true;
        }
        ans++;
    }
    cout<<n-ans<<endl;
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