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
	cin >> n;
	vector<int> a(n);
	for (auto &it : a) 
    {
        cin >> it;
    }
	vector<int> res(n + 1, 1);
	n = unique(a.begin(), a.end()) - a.begin();
	a.resize(n);
	for (int i = 0; i < n; ++i) {
        	res[a[i]] += 1;
	    }
	res[a[0]] -= 1;
	res[a[n - 1]] -= 1;
	int ans = 1e9;
	for (int i = 0; i < n; ++i) {
		ans = min(ans, res[a[i]]);
	}
	cout << ans << endl;
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