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
    string a,b;
    cin>>a>>b;
    int ans = 0;
    int i = 0;
    while(i<n)
    {
        if(a[i] != b[i])
        {
            if(i+1 < n && a[i+1] != b[i+1] && a[i] != a[i+1])
            {
                ans++;
                i+=2;
            }
            else
            {
                ans++;
                i++;
            }
        }
        else
        i++;
    }      
    cout<<ans<<endl; 
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