#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int arr[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }       
    // sort(arr, arr + 3); 
    int ans = arr[0] + arr[1] + arr[2];
    ans = max(ans, (arr[0] + arr[1]) * arr[2]);
	ans = max(ans, arr[0] * (arr[1] + arr[2]));
	ans = max(ans, arr[0] * arr[1] * arr[2]);

	cout << ans << endl;
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