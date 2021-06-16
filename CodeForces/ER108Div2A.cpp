#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
        ll r, b, d;
		cin >> r >> b >> d;
		ll max_diff = min(r, b) * d;
		if (max_diff >= abs(r - b))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	     
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