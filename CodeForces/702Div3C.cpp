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
 
bool check(int n)
{
	int x = cbrt(n);
	int y = 1;
	while (x >= y)
	{	if ((x * x * x + y * y * y) > n)
		{
			x--;
		}
		else if ((x * x * x) + (y * y * y) < n)
		{
			y++;
		}
		else if ((x * x * x) + (y * y * y) == n)
		{
			return true;
		}
 
	}
	return false;
}
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	w(t)
	{
		int n;
		cin >> n;
		bool ans = check(n);
		if (ans)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}