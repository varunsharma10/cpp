#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int n, sum, a[21000];
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    cin>>n;
    sum = 0;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        sum += a[i];
    }
    if (sum % n == 0) {
        sum /= n;
        int cc = 0;
        for (int i = 0; i < n; i++)
            if (a[i] == sum)
                cc++;
        if (cc == n)
            cout<<"Exemplary pages.";
        else if (cc == n - 2) {
            int l, r;
            for (int i = 0; i < n; i++)
                if (a[i] > sum)
                    l = i;
            for (int i = 0; i < n; i++)
                if (a[i] < sum)
                    r = i;
            printf("%d ml. from cup #%d to cup #%d.\n", a[l] - sum, r + 1, l + 1);
        } else
           cout<<"Unrecoverable configuration.";
    } 
    else
        cout<<"Unrecoverable configuration.";   
}