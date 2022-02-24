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
    bool first = false;
    // bool all = false;c 
    int count = 0;
    int n = s.size();
    if(islower(s[0]))
    {
        first = true;
    }
    for(int i=0;i<n;i++)
    {
        if(islower(s[i]))
        {
            count++;
            // first = true;
            // all = true;
        }   
    }
    // cout<<count<<endl;
    if(count == 0)
    {
        string ans = "";
        for(int i=0;i<n;i++)
            ans += tolower(s[i]);
        
        cout<<ans<<endl;
        return;
    }
    else if(count == 1)
    {
        if(first == false)
        {
            cout<<s<<endl;
            return;
        }
        else
        {
            string ans = "";
            for(int i=0;i<n;i++)
            {
                if(i == 0)
                {
                    ans += toupper(s[i]);
                }
                else
                {
                    ans += tolower(s[i]);
                }
            }
            cout<<ans<<endl;
            return;
        }
    }
    else
    {
        cout<<s<<endl;
        return;
    }
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