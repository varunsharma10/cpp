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
        cin>>arr[i];
    }       
    int ans = 0;
    int idx = 0;
    while(1)
    {
        for(int i=n;i>0;i--)
        {
            if(arr[i] != arr[n])
                break;
            
            idx = n-i + 1;
        }
        if(idx == n)
            break;

        for(int i=max(1 , n - 2*idx + 1);i<n;i++)
        {
            arr[i] = arr[n];
        }
        ans++;
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