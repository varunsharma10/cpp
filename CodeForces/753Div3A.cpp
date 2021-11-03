#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    string a, s;
    cin>>a;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<a.size();i++)
    {
        mp[a[i]] = (i+1);
    }   
    vector<int>ans;
    for(int i=0;i<s.size();i++)
    {
        ans.push_back(mp[s[i]]);
    }
    int res = 0;
    for(int i=1;i<ans.size();i++)
    {
        res += abs(ans[i-1] - ans[i]);
    }
    cout<<res<<endl;
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