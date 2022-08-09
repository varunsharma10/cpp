#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    string s;
	cin >> s;
	int n = (int)s.size();
	int cur = 0;
	int worst = 0;
	long long ans = 0;
	for(int i = 0; i < n; i++)
    {
		if(s[i] == '+') cur++;
		if(s[i] == '-') cur--;
		if(cur < worst){
			ans += i+1;
			worst = cur;
		}
	}
	ans += n;
	cout << ans << '\n';       
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