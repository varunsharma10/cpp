#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll a,b;
    cin>>a>>b;
    ll sum = a+b;

    ll tmp = min(a,b);
    if(sum %2 != 0)
    {
        cout<<-1<<" "<<-1<<endl;
    }
    else
    {
        if(tmp == a)
            cout<<a<<" "<<b - sum/2<<endl;
        else
          cout<<a-sum/2<<" "<<b<<endl;
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