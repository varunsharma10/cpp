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
    cin >> n;
    long long a[n], total = 0;
    bool flag = false;
    for (int i = 0; i < n; i++) 
    cin >> a[i];
    for (int t = 0; t < (1 << n); t++) {
    int x = 0;
        for (int i = 0; i < n; i++) 
        {
            if (t & (1 << i)) x += a[i];
            else x -= a[i];
        }
        if (x % 360 == 0) {
        cout << "YES\n";
        return;
    }
  }
  cout << "NO\n";

}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    solve();
}