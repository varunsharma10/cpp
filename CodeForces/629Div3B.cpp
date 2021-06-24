#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,k;
    cin>>n;
    cin>>k;
    string s(n,'a');
    for(int i=n-2;i>=0;i--)
    {
        if(k<=(n-i-1))
        {
            s[i] = 'b';
            s[n-k] = 'b';
            cout<<s<<endl;
            break;
        }
        k-=(n-i-1);
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