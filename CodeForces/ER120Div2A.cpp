#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    vector <ll> arr(3);
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr.begin(),arr.end());
    if(arr[2]==(arr[1]+arr[0])) 
        cout<<"YES\n";
    else if (arr[0]==arr[1]) 
    {
        if(arr[2]%2==0) 
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
    else if(arr[1]==arr[2]) 
    {
        if(arr[0]%2==0) 
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
    else 
        cout<<"NO\n";
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