#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
const int L = 26;
vector<int>balance[L];
void solve()
{   
    int n;
	cin >> n;
	for (int i = 0; i < L; i++)
		balance[i].clear();
	for (int i = 1; i <= n; i++)
	{
		string s;
		cin >> s;
		int initBalance = -(int)s.length();
		for (int j = 0; j < L; j++)
			balance[j].push_back(initBalance);
		for (auto c : s)
			balance[c - 'a'].back() += 2;
	}
	int bestCount = 0;
	int bestLetter = 0;
	for (int i = 0; i < L; i++)
	{
		auto& b = balance[i];
		sort(b.begin(), b.end());
		reverse(b.begin(), b.end());
		if (b[0] <= 0) continue;
		int sumBalance = b[0];
		int j = 1;
		for (; j < n && sumBalance > 0; j++)
			sumBalance += b[j];
		if (sumBalance <= 0) j--;
		if (j > bestCount)
		{
			bestCount = j;
			bestLetter = i;
		}
	}

	cout << bestCount << endl;

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