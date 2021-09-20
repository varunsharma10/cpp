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
    for(int i=1;i<=n;i++)
    {
        int open = n;
        int close = n;

        while(open > 0)
        {
            for(int j=1;j<=i && open > 0 ;j ++ )
            {
                cout<<"(";
                open--;
            }
            cout<<")";
            close--;
        }
        for(int k = 1;k<= close;k++)
        {
            cout<<")";
        }
        cout<<endl;
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