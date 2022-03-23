#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
bool isPerfectSquare(long double x)
{
    if (x >= 0) {
 
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
void solve()
{    
    int a,b;
    cin>>a>>b;
    if(a == 0 && b == 0)
    {
        cout<<0<<endl;
        return;
    }
    else
    {
        int tmp = (a*a) + (b*b);
        if(isPerfectSquare(tmp) == true)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
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