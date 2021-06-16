#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}    
void solve()
{
    ll n;
    cin>>n;
    if(n%11 == 0)
    {
        cout<<"YES"<<endl;
        return;
    }
    ll k = n%11;
    n-=k*111;
    if(n<0)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        if(n%11==0)
        {
            cout<<"YES"<<endl;
            return;
        }
        else
        {
            cout<<"NO"<<endl;
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