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
    cin>>n>>k;
    string s;
    cin>>s;
    string rev = s;
    if(k == 0)
    {
        cout<<1<<endl;
        return;
    }
    reverse(rev.begin(),rev.end());
    int ans = 0;
    if(rev == s)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<2<<endl;
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