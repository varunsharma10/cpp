#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 3005;
const int W = 100005;
ll n,w;
ll weight[N];
ll value[N];
ll dp[N][N];
int main()
{
    string a,b;
    cin>>a>>b;
    memset(dp , 0 , sizeof(dp));
    for(int i=1;i<=a.size();i++)
    {
        for(int j=1;j<=b.size();j++)
        {
            if(a[i-1] == b[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
    }
    string ans = "";
    int i=a.size();
    int j=b.size();
    while(i > 0 && j > 0)
    {
        if(a[i-1] == b[j-1])
        {
            ans += a[i-1];
            i--;
            j--;
        }
        else
        {
            if(dp[i-1][j] > dp[i][j-1])
            {
                i--;
            }
            else
            {
                j--;
            }
        }
    }
    reverse(ans.begin() , ans.end());
    cout<<ans<<endl;
    // cout<<dp[a.size()][b.size()]<<endl;
    // memset(dp , -1 ,sizeof(dp));
   
}