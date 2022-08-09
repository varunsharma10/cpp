#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int ans[1000005];
void solve()
{    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ans[arr[i]] = 1;
    }       
    int count = 0;
    for(int i=1;i<=1e6;i++)
    {
        int g = 0;
        for(int j=i;j<=1e6;j+=i)
        {
            if(ans[j])
            {   
                g = __gcd(g,j);
            }
        }
        if(g == i)
            count++;
    }
    cout<<count - n <<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}