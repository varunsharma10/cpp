#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n;
    cin>>n;
    string s;
    vector<int>ans;
    cin>>s;
    int sw=1;
    for(int i=1;i<n;i++)
    {
        if(s[i-1]>s[i])
        {
            sw=0;
            break;
        }
    }
    if(sw){
        cout<<s<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        break;
        ans.push_back(0);
    }
    ans.push_back(0);
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
            break;
        }
       ans.push_back(1);
    }      
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
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