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
    while(true)
    {
        bool ok = true;
        int curr = n;
        while(curr>0)
        {
            if(ok && curr%3==2)
            {
                ok = false;
            }
            curr/=3;
        }
        if(ok) break;
		++n;
    }       
    cout<<n<<endl;
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