#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
long long t, a[3000001], k;
void solve()
{    
    int n,m;
    cin>>n>>m;
    if (n - 1 <= m && m <= 2*(n + 1))
    {
        if (m == n - 1) {
            a[0] = -1;
            a[m + 1] = -1;
            t = n - 1;
        }
        else if (m == n)
        {
            a[m + 1] = -1;
            t = n;
        }
        else 
        t = n + 1;
        k = m % t;
        if (k == 0 && m != t) k = n + 1;
        if (a[0] == -1)
        cout<<"0";
        for (int i = 1; i <= n; i++)
        {
            if (a[i] != -1){
            if (k > 0) 
            cout<<"110";
            else 
            cout<<"10";
            k--;
            }
        }
        if (a[m + 1] != -1) {
            if (k > 0) 
            cout<<"11"<<endl;
            else 
            cout<<"1"<<endl;
        }
    }
    else 
    cout<<"-1"<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}