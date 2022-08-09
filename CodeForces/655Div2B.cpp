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
    int p = 0;
    for(int m=2 ;m<=1000000;m++)
    {
        if(n%m==0){
            p = m;
            break;
        }
    }       
    if(p == 0){
        p = n;
        
    }
    cout<<n/p<<" "<< (n-(n/p))<<endl;
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