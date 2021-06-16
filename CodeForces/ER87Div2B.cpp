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
    cin>>s;
    int ans=(int)1e9;
    vector<pair<char, int> > c;
		for(auto x : s)
		{
			if(c.empty() || c.back().first != x)
				c.push_back(make_pair(x, 1));
			else
				c.back().second++;
		}
		int m = c.size();
		for(int i = 1; i < m - 1; i++)
			if(c[i - 1].first != c[i + 1].first)
				ans = min(ans, c[i].second + 2);
		if(ans > s.size())
			ans = 0;
		cout<<ans<<endl;
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