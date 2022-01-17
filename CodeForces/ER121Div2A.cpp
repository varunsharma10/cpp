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
    map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }   
    string ans = "";
    for(auto it : mp)
    {
        if(it.second == 2)
        {
            ans+=it.first;
            ans+=it.first;
        }
    }
    for(auto it : mp)
    {
        if(it.second == 1)
        {
            ans+=it.first;
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