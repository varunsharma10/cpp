#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int dp[55];
ll arr[300000];
ll arr2[300000];
void solve()
{    
    ll n,q;
    cin>>n>>q;
    memset(dp,0,sizeof(dp));
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(dp[arr[i]]==0)
        {
            dp[arr[i]]=i+1;
        }
    }
    for(ll i=0;i<q;i++)
    {
        cin>>arr2[i];
        cout<<dp[arr2[i]]<<" ";
        for(int j=0;j<51;j++)
        {
            if(dp[j]!=0)
            {
                if(dp[j]<dp[arr2[i]])
                {
                    dp[j]++;
                }
            }
        }
        dp[arr2[i]]=1;
    }
    

}
int main()
{   
    solve();
}