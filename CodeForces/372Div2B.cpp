#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int cnt[27];
string s;
int n;
bool valid()
{
	for(int i = 0; i < 26; i++)
	{
		if(cnt[i] >= 2) return false;
	}
	return true;
}
void fillall()
{
	for(int i = 0; i < n; i++)
	{
		if(s[i] == '?') s[i] = 'A';
	}
}
void solve()
{    
    cin >> s;
	n = s.length();
    if(n < 26) 
    {
        cout << -1; 
        return;
    }
	for(int i = 25; i < n; i++)
	{
		memset(cnt, 0, sizeof(cnt));
		for(int j = i; j >= i - 25; j--)
		{
			cnt[s[j]-'A']++;
		}
		if(valid())
		{
			int cur = 0;
			while(cnt[cur]>0) cur++;
			for(int j = i - 25; j <= i; j++)
			{
				if(s[j] == '?')
				{
					s[j] = cur + 'A';
					cur++;
					while(cnt[cur]>0) cur++;
				}
			}
			fillall();
			cout << s;
			return;
		}
	}
	cout << -1;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}