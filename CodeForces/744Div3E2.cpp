#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <queue>
#include <stack>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <random>

#define int long long

using namespace std;

const int INF = 1e18;
int n, ans, p[200005];
vector < int > a;

void pereb(int step)
{
    if(step == n)
    {
        int inv = 0;
        for(int i = 0; i < n; i++)
            for(int j = i + 1; j < n; j++)
                inv += (a[i] > a[j]);
        ans = min(ans, inv);
        return;
    }
    vector < int > cur = a;
    a.push_back(p[step]);
    pereb(step + 1);
    a = {p[step]};
    for(auto i : cur)
        a.push_back(i);
    pereb(step + 1);
    a = cur;
    return;
}

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> p[i];
        ans = INF;
        pereb(0);
        cout << ans << '\n';
    }
    return 0;
}
