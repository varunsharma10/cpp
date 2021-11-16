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
    bool ok = true;
    for(int i=1;i<=n;i++)
    {
        bool found = false;
        for(int j=i+1;j>=2;j--)
        {
            if(arr[i] % j)
            {
                found = true;
                break;
            }
        }
        ok &= found;
    }
    if(ok)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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