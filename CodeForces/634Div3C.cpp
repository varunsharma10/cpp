#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n;
    cin>>n;
    vector<ll>ans;
    ll arr[n];
    vector<ll>cnt(n+1);
    for (int i = 0; i < n; ++i) 
    {
		int x;
		cin >> x;
		++cnt[x];
	}
	int mx = *max_element(cnt.begin(), cnt.end());
	int diff = n + 1 - count(cnt.begin(), cnt.end(), 0);
	cout << max(min(mx - 1, diff), min(mx, diff - 1)) << endl;
    

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