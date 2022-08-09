#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n, m;
	cin >> n >> m;
	if (m == 1)
	{	cout << 1 ;
		for (int i = 1; i < n; i++)
		{
			cout << 0 ;
		}
		cout << " ";
		cout << 1 ;
		for (int i = 1; i < n; i++)
		{
			cout << 0 ;
		}
	}
	else if (n > 1 && m == 0)
	{
		cout << -1 << " " << -1 << endl;
	}
	else if (n == 1 && m == 0)
	{
		cout << 0 << " " << 0 << endl;
	}
	else if ( 9 * n < m)
	{	cout << -1 << " " << -1 << endl;
 
	}
	else {
		int max[n];
		int min[n];
		for (int i = 0; i < n; i++)
		{
			max[i] = 0;
			min[i] = 0;
		}
		min[0] = 1;
		int k = n - 1;
		int sum = m - 1;
		while (sum - 9 >= 0)
		{
			min[k] = 9;
			sum -= 9;
 
			k--;
 
		}
		if (k == 0)
		{	min[k] += sum;
 
		}
		else {min[k] = sum;}
 
		int res = 0;
		k = 0;
		while (res + 9 <= m)
		{	max[k] = 9;
			k++;
			res += 9;
 
		}
		max[k] = m - res;
		for (int i = 0 ; i < n; i++)
		{
			cout << min[i];
		}
		cout << " ";
		for (int i = 0; i < n; i++)
		{
			cout << max[i];
		}
		cout << endl;
	}
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