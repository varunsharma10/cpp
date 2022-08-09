#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int a,b,c,m;
    cin>>a>>b>>c>>m;
    bool ok = true;
    vector<int>tmp;
    tmp.push_back(a);
    tmp.push_back(b);
    tmp.push_back(c);
    sort(tmp.begin(),tmp.end());
    if( max(0,(a-1)) + max(0,(b-1)) + max(0,(c-1)) < m)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        ll sum = tmp[2] - (tmp[0] + tmp[1] + 1);
        if(m>=sum)
        {
            cout<<"YES"<<endl;
            return;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
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