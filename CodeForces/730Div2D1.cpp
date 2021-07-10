#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,k;
    cin>>n>>k;
    cout<<0<<endl;
    cout.flush();
    int r;
    cin>>r;
    if(r==1)
    {
        return;
    }       
    for(int i=1;i<=n-1;i++)
    {
        int y= i^(i-1);
        cout<<y<<endl;
        cout.flush();
        int r;
        cin>>r;
        if(r==1)
        {
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