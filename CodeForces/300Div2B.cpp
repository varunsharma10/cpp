#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
   int N;
    cin >> N;
    vector<int>a;
    while (N) 
    {
        int n = N, m = 0, p = 1;
        while (n) 
        {
            if (n % 10) m += p;
            n /= 10; p *= 10;
        }
        a.push_back(m);
        N -= m;
    }
    cout << a.size() << endl;
    sort(a.begin(),a.end());
    for (int x: a) cout << x << ' ';
    cout << endl;
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