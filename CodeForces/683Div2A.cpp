#include<bits/stdc++.h>
 
using namespace std;
 
#define ff             first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
 
 
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	w(x)
	{
		int n, c, c1, h;
		cin >> n >> c >> c1 >> h;
		string s;
		cin >> s;
		int cnt_z = 0;
		int cnt_o = 0;
		for (int i = 0; i < n; i++)
		{	if (s[i] == '1')
			{
				cnt_o++;
			}
			else if (s[i] == '0')
			{
				cnt_z++;
			}
 
		}
		int ans = 0;
		int k = min(c, c1);
		int y = max(c, c1);
		if (h + k < y)
		{	if (c - k == 0)
			{	ans = cnt_z * c + (cnt_o * h) + cnt_o * c;
 
			}
			else if (c1 - k == 0)
			{ans = cnt_o * c1 + (cnt_z * h) + cnt_z * c1;}
 
 
		}
		else
		{	if (c - k == 0)
			{
				ans = cnt_z * k + cnt_o * y;
			}
			if (c1 - k == 0)
			{
				ans = cnt_o * k + cnt_z * y;
			}
		}
		cout << ans << endl;
	}
 
 
 
 
 
 
 
 
	return 0;
}