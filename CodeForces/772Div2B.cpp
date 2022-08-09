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
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }       
    int ans = 0;
    for (int i = 1; i + 1 < n; ++i) 
    {
        if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            if(i + 2 < n)
            {
                arr[i+1] = max(arr[i] , arr[i+2]);
            }
            else
            {
                arr[i+1] = arr[i];
            }
            ans++;
        }
    }
    cout<<ans<<endl;
    for(int i=0;i<n;i++)
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