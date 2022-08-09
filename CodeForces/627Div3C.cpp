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
    ll count1 = 1;
    ll count2 = 1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='R')
        count1++;
        else if(s[i]=='R')
        break;
    }       
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]!='R')
        count2++;
        else if(s[i]=='R')
        break;
    }
    ll count = 1;
    ll ans = max(count1,count2);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='R')
        {
            count++;
        }
        else if(s[i]=='R')
        {
            ans = max(ans , count);
            count = 1;
        }
    }
    cout<<ans<<endl;

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