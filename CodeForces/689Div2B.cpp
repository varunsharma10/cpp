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
    int dp[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {   
            dp[i][j]=0;
            char c;
            cin>>c;
            if(c=='*')
            dp[i][j]=1;
        }
    }
   for(int k=1;k<510;k++)
   {
       for(int i=1;i<n;i++)
       {
           for(int j=1;j<m-1;j++)
           {
               if (dp[i-1][j] >= k && dp[i][j-1] >= k && dp[i][j+1] >= k && dp[i][j] == k) 
               dp[i][j]++;
           }
       }
   }
   int ans=0;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           ans+=dp[i][j];
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