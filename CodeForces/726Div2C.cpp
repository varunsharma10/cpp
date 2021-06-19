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

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int x = 0, y = 1;
    int diff = abs(a[y] - a[x]);
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] < diff)
        {
            diff = abs(a[i + 1] - a[i]);
            x = i;
            y = i + 1;
        }
    }

    cout << a[x] << " ";
    for (int i = y + 1; i < n; i++)
        cout << a[i] << " ";

    for (int i = 0; i < x; i++)
        cout << a[i] << " ";

    cout << a[y] << "\n";
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