#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int ans[100][100];
void solve()
{    
    int n;
    cin>>n;
    int x=1;
    if(n==2)
    {
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   
            if(x>(n*n))
            {
                x=2;
                ans[i][j]=x;
            }
            else
            {
                ans[i][j]=x;
            }
            x+=2; 
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   
            cout<<ans[i][j]<<" ";
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