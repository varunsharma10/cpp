#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,m;
    cin>>n>>m;
    vector<string>v(n);
    vector<string>o(n-1);
    vector<int>ans(m,0);
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }       
    for(int i=0;i<n-1;i++)
    {
        string s;
        cin>>s;
        o.push_back(s);
    }
    
    for(int i=0;i<n;i++)
    {   
        string str = v[i];
        for(ll j=0;j<m;j++)
        {
            ans[j]= ans[j] + (str[j]-'a');
        }
    }
    for(int i=0;i<n-1;i++)
    {   
        string str = o[i];
        for(ll j=0;j<m;j++)
        {
            ans[j]= ans[j] - (str[j]-'a');
        }
    }
    for(ll i=0;i<m;i++)
    {
        char ch ='a'+ans[i];
        cout<<ch;
    }
    cout<<endl;
    cout<<flush;
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