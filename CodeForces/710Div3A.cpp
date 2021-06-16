#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{   
    ll n,m,x;
    cin >> n >> m >> x;
	--x;
	ll r = x % n, c = x / n;
	cout << m * r + c + 1 << '\n';

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}