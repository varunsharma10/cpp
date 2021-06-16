#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    long long n, r;
        cin >> n >> r;
 
        long long smal = min(n, r);
 
        if (smal == n) {
            smal--;
            cout << ((smal * (smal + 1)) / 2) + 1<< '\n';
        }
        else {
            cout << (smal * (smal + 1)) / 2 << '\n';
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