#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll n;
    cin>>n;
    vector<ll>arr(n),arr2(n-1),arr3(n-2);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>arr2[i];
    }
    sort(arr.begin(),arr.end());
    sort(arr2.begin(),arr2.end());
    bool ok = true;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i] != arr2[i])
        {
            cout<<arr[i]<<endl;
            ok =false;
            break;
        }
    }
    if(ok)
    {
        cout<<arr[n-1]<<endl;
    }
    bool ok2= true;
    for(int i=0;i<n-2;i++)
    {
        cin>>arr3[i];
    }
    sort(arr3.begin(),arr3.end());
    for(int i=0;i<n-2;i++)
    {   
        if(arr2[i] != arr3[i])
        {
            cout<<arr2[i];
            ok2 = false;
            break;
        }
    }
    if(ok2)
    {
        cout<<arr2[n-2]<<endl;
    }
}