#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int v, a[9], mn=1000000, nums, l;
	cin >> v;
	for(int i=0;i<9;i++) {
		cin >> a[i];
		mn = min(mn, a[i]);
	}
	nums = v/mn;
	l = v - nums*mn;
	if(mn > v) {
		cout << "-1\n";
		return 0;
	}
	for(int i=0;i<nums;i++) {
		for(int j=8;i>=0;j--)
			if(a[j] - mn <= l) {
				l -= a[j]-mn;
				cout << char('1'+j);
				break;
			}
	}
	cout << '\n';
	return 0;
}