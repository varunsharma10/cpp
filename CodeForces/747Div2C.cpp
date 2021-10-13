#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    vector<int>ans;
    bool ok = true;
    for(auto it : s)
    {
        if(it != c)
            ok = false;
    }
    if(ok == true)
    {
        cout<<0<<endl;
        return;
    }
    else
    {
        for(int i=n/2;i<n;i++)
        {
            if(s[i] == c)
            ans.push_back(i);
        }
        if(!ans.empty())
        {
            cout<<1<<endl;
            cout<<ans[0]+1;
            cout<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
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