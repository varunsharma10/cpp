#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n;
    cin>>n;
    vector<string> arr(n);
    for (auto& s : arr) 
    cin >> s;
    vector<pair<int,int>>ans0;
    vector<pair<int,int>>ans1;
    (arr[0][1] == '0' ? ans0 : ans1).push_back({0,1});
	(arr[1][0] == '0' ? ans0 : ans1).push_back({1,0});
	(arr[n-1][n-2] == '1' ? ans0 : ans1).push_back({n-1,n-2});
	(arr[n-2][n-1] == '1' ? ans0 : ans1).push_back({n-2,n-1});
    if (ans0.size() > ans1.size()) 
        swap(ans0, ans1);
		cout << ans0.size() << endl;
	for (auto it : ans0)
    {
		cout << it.first+1 << ' ' << it.second+1 << endl;
	}
    
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}