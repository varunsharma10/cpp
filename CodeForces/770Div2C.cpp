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
    if(k == 1)
    {
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++)
        {
            cout<<i<<endl;
        }
        return;
    }       
    if(n%2 != 0)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=k-1;j++)
        {
            cout<<i+(j*n)<<" ";
        }
        cout<<endl;
    }
    return;
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