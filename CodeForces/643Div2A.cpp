#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll solution(ll n)
{
    ll largest = 0;
    ll smallest = 9;
 
    while (n) {
        ll r = n % 10;

        largest = max(r, largest);

        smallest = min(r, smallest);
 
        n = n / 10;
    }
    return smallest*largest;
}
void solve()
{    
    ll a,k;
    cin>>a>>k;
    k--;
    while(k--){
        ll y=solution(a);
        if(y==0)
        {
            break;
        }
        a+=y;
    }
    cout<<a<<endl;
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