#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int xoor[1000000];
void solve()
{    
    int a,b;
    cin>>a>>b;
    int ans = a;
    int x = xoor[a-1];
    int y = x^b;
    if(y == a)
        ans++;
    if(x == b)
    {
        cout<<ans<<endl;
        return;
    }
    else
    {
        cout<<ans+1<<endl;
    }

}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    xoor[0] = 0;
    for(int i=1;i<3*100001;i++)
    {
        xoor[i] = xoor[i-1]^i;
    }
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}