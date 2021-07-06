#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n, k;
    int x, y, z;
    cin >> n;
    while (n--)
    {
        k = 0;
        cin >> x >> y >> z;
        cout << max(0, min(z + 1, (x + z + 1 - y) / 2)) << '\n';
    }
}