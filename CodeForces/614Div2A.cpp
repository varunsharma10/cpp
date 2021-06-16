#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
vector<int>a;
void solve()
{    
    ll n,s,k;
    cin>>n>>s>>k;
    a.clear();
    a.resize(k);
    for(auto &z : a)
    {
        cin>>z;
    }
    for (int i=0; i<=k; i++) {
		if (s-i >= 1 && find(a.begin(), a.end(), s-i) == a.end()) 
        {
            cout << i << endl;
            return;
        }
		if (s+i <= n && find(a.begin(), a.end(), s+i) == a.end())
        {
            cout << i << endl;
            return;
        }
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