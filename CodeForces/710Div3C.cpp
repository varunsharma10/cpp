#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{   
    string s,t;
    cin >> s >> t;
	
	ll ans = 0;
	for (ll i = 0; i < s.size(); i++) {
		for (ll j = 0; j + i <= s.size(); j++) {
			for (ll i2 = 0; i2 < t.size(); i2++) {
				if (i2 + j <= t.size()) {
					if (s.substr(i, j) == t.substr(i2, j)) ans = max(ans, j);
				}
			}
		}
	}
	
	cout << s.size() + t.size() - 2 * ans << '\n';
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}