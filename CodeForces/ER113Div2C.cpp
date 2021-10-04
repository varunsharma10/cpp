#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 998244353
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

vector<int> fact(200208);

int pow(int x, int y, int p)
{
    int res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int cal(int n, int p)
{
    return pow(n, p - 2, p);
}
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr ,arr+n,greater<int>());
    int a = 1, b = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[0])
            a++;
        else if (arr[i] + 1 == arr[0])
            b++;
        else
            break;
    }
    if (a >= 2)
    {
        cout << fact[n] % MOD << endl;
        return;
    }
    int cc = 1 + b;
    cout << (fact[n] * (cc - 1) % MOD) * cal(cc, MOD) % MOD << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    fact[0] = 1;
    for (int i = 1; i < 200208; i++)
    {
        fact[i] = fact[i - 1] * i % MOD;
    }
    while (t--)
    {
        solve();
    }
}