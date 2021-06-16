#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll a[200005];
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int i = 0, j = n+1;
	ll zi = 0, zj = 0, solidx = 0;
	while (i < j) {
		if (zi < zj)
			zi += a[++i];
		else if (zi > zj)
			zj += a[--j];
		else {
			solidx = i;
			zi += a[++i];
			zj += a[--j];
		}
	}
	
	cout << accumulate(a+1, a+solidx+1, 0ll);
}