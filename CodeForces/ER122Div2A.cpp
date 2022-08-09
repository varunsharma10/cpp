#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n;
    cin>>n;
    string s = to_string(n);
    
    if(n%7 == 0)
    {
        cout<<n<<endl;
        return;
    }
    n = n/10;
    n = n*10;
    for(int i =0;i<=9;i++)
    {
        if((n+i)%7 == 0)
        {
            cout<<n+i<<endl;
            return;
        }
    }
    cout<<n<<" "<<n-(n%7)<<endl;
    
    // cin>>n;
   
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