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
    char minn = s[0];
    for(int i=1;i<s.size();i++)
    {
        if((int)minn > (int)s[i])
        {
            minn = s[i];
        }
    }
    string ans;
    bool ok = true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == minn && ok == true)
        {
            ok = false;
            continue;
        }
        else
        {
            ans+=s[i];
        }
    }
    cout<<minn<<" "<<ans<<" "<<endl;
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