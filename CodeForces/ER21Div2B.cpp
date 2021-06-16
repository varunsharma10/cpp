#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
const int N = 2e5;
int waga[N + 7];
int tab[N + 7];
int n, k;
 
int main()
{   
    send help
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) cin >> tab[i];
    for (int i = 1; i + k - 1 <= n; ++i) {
      waga[i]++;
      waga[i + k]--;
    }
    for (int i = 1; i <= n; ++i) waga[i] += waga[i - 1];
    
    long double licz = 0;
    for (int i = 1; i <= n; ++i) {
      licz += (long double) waga[i] * tab[i];
    }
    
    licz /= (n - k + 1);
    cout.precision(10);
    cout << fixed;
    cout << licz << endl;
    return 0;
}
