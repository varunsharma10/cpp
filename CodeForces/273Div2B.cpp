#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    	ll n, m;
	cin >> n >> m;
	if (n <= m) {cout << 0 << " " << 0 << endl;}
	else {
		ll extra = n - m;
		ll max = (extra * (extra + 1)) / 2;
 
		ll a = n / m;
		ll b = n % m;
		ll min;
		if (b == 0)
		{	min = ((a * (a - 1)) / 2) * m;
 
 
		}
		else
		{	min = ((a * (a - 1)) / 2) * (m - b);
			min +=  ((a * (a + 1)) / 2) * b;
 
		}
		cout << min << " " << max << endl;
 
 
 
	}
 
	return 0;
 
}
