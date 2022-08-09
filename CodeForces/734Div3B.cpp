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
    int ans1 = s.size();
    map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {   
        mp[s[i]]++;
    }   
    for(auto c : mp)
    {
        if(c.second > 2)
        {
            ans1-=(c.second - 2);
        }
    } 
    cout<<ans1/2<<endl;
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