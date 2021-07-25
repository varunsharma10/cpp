#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
bool ok(string a,int idx, string b)
{
    int x = a.size()-1;
    for(int i = 1;i<b.size();i++)
    {
        if( (idx > 0 && a[idx-1] == b[i]))
        {
            --idx;
        }
        else if((idx < x && a[idx+1] == b[i]))
        {
            ++idx;
        }
        else
        {
            return false;
        }
    }
    return true;
}
void solve()
{    
    string a,b;
    cin>>a>>b;
    int i = 0;
    vector<int>ans;
    for(int i=0;i<a.size();i++)
    {
        if(b[0] == a[i])
        {
            ans.push_back(i); 
        }
    }
    string res = "NO";
    for(auto i : ans)
    {
        if(ok(a,i,b))
        {
            res = "YES";
            break;
        }
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