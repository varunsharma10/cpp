#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin >> n;
 
        int ari[n + 1] = {0};
        int dep[n + 1] = {0};
 
 
        for (int i = 1; i < n + 1; i++)
        {
            cin >> ari[i] >> dep[i];
        }
 
        int tm[n + 1];
 
        for (int i = 0; i < n; i++)
            cin >> tm[i];
 
        ll arrival = 0, previousDeparture = 0;
 
        for (int i = 1; i <= n; i++)
        {
            int traveltime = abs(ari[i] - dep[i - 1]);
 
            arrival = previousDeparture + (traveltime + tm[i - 1]);
 
            int wait = abs(ari[i] - dep[i]);
 
            wait = (double)ceil(wait / 2.00);
 
            previousDeparture = arrival + wait;
            previousDeparture = max(previousDeparture, (ll)dep[i]);
        }
        cout << arrival << endl;
    }
    return 0;
}