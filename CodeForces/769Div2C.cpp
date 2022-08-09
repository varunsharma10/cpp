#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll a,b;
    cin>>a>>b;
    int ans = b-a;
    for(int i=0;i<(b-a);i++)
    {
        if(((a + i) | b) == b)
        {
            ans = min(ans , i+1);
        }
        if((a | (b+i)) == (b+i))
        {
            ans = min(ans , i+1);
            break;
        }
    }
    cout<<ans<<endl;

    // cout<<min({count1, count2, count3})<<endl;
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