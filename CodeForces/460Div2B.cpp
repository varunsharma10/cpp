#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int cal(int num)
{
	int ans = 0;
	while (num){
		ans += num % 10;
		num /= 10;
	}
	return ans;
}
void solve()
{    
    int k;
    cin>>k;
    int ans = 0;
    while(k)
    {
        ans++;
        if(cal(ans) == 10)
            k--;
    }
    cout<<ans<<endl;
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