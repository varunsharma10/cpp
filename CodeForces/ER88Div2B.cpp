#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
char arr[101][1001];
void solve()
{    
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {   
            cin>>arr[i][j];
        }
    }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(arr[i][j]=='.')
           {
               if(j < m-1 && arr[i][j+1] == '.')
               {
                   ans+=min(2*x,y);
                   j++;
                   continue;
               }
               ans+=x;
           }
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