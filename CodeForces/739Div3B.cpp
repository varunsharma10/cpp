#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int a,b,c;
    cin>>a>>b>>c;
    if(b > a)
    {
        swap(a,b);
    }
    if(a - b == 1)
    {
        cout<<-1<<endl;
        return;
    }
    int x = 2*(a - b);
    if(a > x || b > x || c > x)
    {
        cout<<-1<<endl;
        return;
    }
    int tmp = c + (x/2);
    if(tmp > x)
    {
        tmp = c - (x/2);
    }
    if(tmp < 0)
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        cout<<tmp<<endl;
        return;
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