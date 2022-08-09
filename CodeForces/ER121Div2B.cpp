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
    int n = s.size();
    int maxx = 0;
    int start2 = -1;
    vector<int>start;
    int ok = 0;
    for(int i=n-1;i>0;i--)
    {
        maxx = ((s[i] - '0')  + (s[i-1] - '0'));
        if(maxx <= 9)
        {
            continue;
        }
        else
        {
            ok = 1;
            s[i] = maxx%10 + '0';
            s[i-1] = maxx/10 + '0';
            break;
        }
    }
    if(ok != 1)
    {
        string ans= "";
        ans += s[0]  + s[1] -'0';
        // cout<<ans;
        for(int i=2;i<n;i++)
        {
            ans+=s[i];
        }
        cout<<ans<<endl;
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
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}