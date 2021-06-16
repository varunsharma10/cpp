#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    

}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll ans=0;
    ll j = 0;
    bool ok = false;
    for (int i = 0; i < n; ++i) {
		while (j < n && arr[j] - arr[i] <= 5) {
			++j;
			ans = max(ans, j - i);
		}
	}
   cout<<ans<<endl;
}