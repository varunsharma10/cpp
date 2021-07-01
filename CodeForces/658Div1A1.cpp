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
    vector<int>ans;
    string s;
    cin>>s;
    string b;
    cin>>b;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=b[i])
        {
        if(i>0)
        {
            ans.push_back(i+1);
        }
        ans.push_back(1);
        if(i>0)
        {
            ans.push_back(i+1);
        }
        }
    }  
    cout<<ans.size()<<" ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
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