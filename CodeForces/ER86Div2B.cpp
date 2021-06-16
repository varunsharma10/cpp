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
    ll one=0;
    ll zero=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            zero++;
        }
        else
        {
            one++;
        }
        
    }       
    if(one == s.size() || zero == s.size())
    {
        cout<<s<<endl;
        return;
    }
    for(int i=0;i<2*s.size();i++)
    {
        if(i%2==0)
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
        
    }
    cout<<endl;
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