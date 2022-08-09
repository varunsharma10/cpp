#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    vector<int>tmp;
    int ans = 0;
    for(int i=0;i<4;i++)
    {
        int x;
        cin>>x;
        tmp.push_back(x);
    }       
    for(int i=1;i<4;i++)
    {
        if(tmp[0] < tmp[i])
        {
            ans++;
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