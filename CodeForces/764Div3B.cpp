#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll a, b,c;
    cin>>a>>b>>c;
    ll new_a = (b) - (c-b);
    if(new_a >= a && new_a % a == 0 && new_a != 0)
    {
        cout<<"YES"<<endl;
        return;
    }   
    ll new_b = (a) + (c-a)/2;
    if(new_b >= b && (c-a)%2 == 0 && new_b % b == 0 && new_b != 0)
    {
        cout<<"YES"<<endl;
        return;
    }     
    ll new_c = (a) + 2*(b-a);
    if(new_c >= c && new_c % c == 0 && new_c != 0)
    {
        cout<<"YES"<<endl;
        return;
    }       
    cout<<"NO"<<endl;
    return;
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