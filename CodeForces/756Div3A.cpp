#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    string s;
    cin>>s;
    bool ok =false;
    int ans = 0;
    if(s[s.size()-1] % 2 == 0)
    {
        cout<<0<<endl;
        return;
    }
    else if(s[0] % 2 == 0)
    {
        cout<<1<<endl;
        return;
    }
    for(int i = 0;i<s.size();i++)
    {
        if(s[i] % 2 == 0)
        {
            ok = true;
        }
    }
    if(ok)
    {
        cout<<2<<endl;
    }
    else
    {
        cout<<-1<<endl;
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