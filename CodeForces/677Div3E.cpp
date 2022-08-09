#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
const int N =21;
ll f[N];
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int n;
	cin >> n;
	f[0] = 1;
	for (int i = 1; i < N; ++i) {
		f[i] = f[i - 1] * i;
	}
	
	long long ans = f[n] / f[n / 2] / f[n / 2];
	ans = ans * f[n / 2 - 1];
	ans = ans * f[n / 2 - 1];
	ans /= 2;
	
	cout << ans << endl;
}