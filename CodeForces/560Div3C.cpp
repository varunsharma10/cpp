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
    string s;
    cin>>s;
    string res = "";
    for(int i=0;i<n;i++)
    {
        if(res.size() % 2 == 0 || res.back() != s[i])
            res.push_back(s[i]);
       
    }  
    if(res.size() % 2 != 0)
            res.pop_back();
            
    cout<<n - res.size()<<endl;
    cout<<res<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}