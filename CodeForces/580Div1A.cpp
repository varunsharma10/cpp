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
    vector<ll>arr(2*n);
    if(n%2==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    for(int i=0; i<n;i++)
    {
        arr[i]= 2*i + 1;
        arr[i+n] = 2*i + 2;
        if(i%2==1)
        {
            swap(arr[i],arr[i+n]);
        }
    }
    for(int i=0;i<2*n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}