#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int h, w;
    cin >> h >> w;
    bool ok = true;
    for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
        int limit = 0;
        if (i > 0) ++limit;
        if (i < h - 1) ++limit;
        if (j > 0) ++limit;
        if (j < w - 1) ++limit;
        int x;
        cin >> x;
        if (x > limit) {
          ok = false;
        }
      }
    }
    if (!ok) {
      cout << "NO" << '\n';
    } else {
      cout << "YES" << '\n';
      for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
          if (j > 0) {
            cout << " ";
          }
          int limit = 0;
          if (i > 0) ++limit;
          if (i < h - 1) ++limit;
          if (j > 0) ++limit;
          if (j < w - 1) ++limit;
          cout << limit;     
        }
        cout<<endl;
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