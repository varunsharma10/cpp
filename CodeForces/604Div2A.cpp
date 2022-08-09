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
    bool ok = true;     
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='?')
        {
            if(s[i-1]!='a' && s[i+1]!='a')
            s[i]='a';
			else if(s[i-1]!='b' && s[i+1]!='b')
            s[i]='b';
			else if(s[i-1]!='c' && s[i+1]!='c')
            s[i]='c';
        }
        else
        {
            if(s[i] == s[i-1])
            {
                ok = false;
                break;
            }
        }
        
    }  
    if(ok)
    cout<<s<<endl;
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