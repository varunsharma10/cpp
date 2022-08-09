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
    vector<ll>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll q=0;
    cin>>q;
    for(int i=0;i<q;i++)
    {   
        ll x;
        cin>>x;
        ll l =0;
        ll r = n-1;
        ll index = -1;
        while(r>=l)
        {
            ll mid = (l + r)/2;
            if(arr[mid] > x)
            {
                r = mid-1;
            }
            else
            {
                index = mid;
                l = mid+1;
            }
            
        }
        if(index == -1)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<index+1<<endl;
        }
        

    }
}