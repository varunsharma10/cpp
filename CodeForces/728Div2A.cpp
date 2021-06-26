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
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        arr[i] = i;
    }    
    if(n==3)
    {
        cout<<3<<" "<<1<<" "<<2<<endl;
        return;
    }
    if(n%2==0)
    {
        for(int i=1;i<=n;i+=2)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    else
    {
        for(int i=1;i<n;i+=2)
        {
            swap(arr[i],arr[i+1]);
        }
        swap(arr[n-1],arr[n]);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
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