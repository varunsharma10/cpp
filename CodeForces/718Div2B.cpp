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
    vector<vector<int>> a(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        cin >> a[i][j];
      }
    }
    vector<vector<int>> b(h, vector<int>(w, -1));
    vector<tuple<int, int, int>> all;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        all.emplace_back(a[i][j], i, j);
      }
    }
    sort(all.begin(), all.end());
    for (int id = 0; id < w; id++) {
      int i = get<1>(all[id]);
      b[i][id] = get<0>(all[id]);
    }
    for (int id = w; id < h * w; id++) {
      int i = get<1>(all[id]);
      for (int j = 0; j < w; j++) {
        if (b[i][j] == -1) {
          b[i][j] = get<0>(all[id]);
          break;
        }
      }
    }
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (j > 0) {
          cout << " ";
        }
        cout << b[i][j];
      }
      cout << '\n';
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