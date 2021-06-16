#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll getsum(ll n)
{
    ll sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll n;
    cin>>n;
		for (int i = 1; i <= 150; ++ i) {
			ll x = sqrt(i * i / 4 + n) - i / 2;
			ll _x = x;
			ll sum=getsum(_x);
			if (x * x + sum * x - n == 0) {
				cout<<x<<endl;
				return 0;
			}
		}
		puts("-1");
		return 0;

}