#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,m;
    cin>>n>>m;
    if(n>=m)
    {
        cout<<abs(n-m)<<endl;
        return;
    }   
    int ans = 0;
    while(m > n)
    {
        if(m%2==0){
            m=m/2;
            ans++;
        }
        else
        {
            m=m+1;
            m=m/2;
            ans+=2;
        }
    }
    if(n==m)
    {
        cout<<ans<<endl;
        return;
    }
    else{
        cout<<ans+(abs(n-m));
    }

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