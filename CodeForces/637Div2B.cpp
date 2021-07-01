#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int pre[210000];
void solve()
{    
    int n,k;
    cin>>n>>k;
    ll arr[n];
    ll ans[n];
    memset(ans,0,sizeof(ans));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    for(int i=1;i<n-1;i++)
    {
        if(arr[i-1] < arr[i] && arr[i] > arr[i+1])
        {
            ans[i] = 1;
        }
    }
    for(int i=1;i<=n;i++)
    {  
        pre[i] = pre[i-1] + ans[i-1];
    }

    ll max = INT_MIN;
    ll final = 0;
    for(int i=0;i+k-1 < n;i++)
    {
        if(pre[i+k-1] - pre[i+1] > max)
        {
            max = pre[i+k-1] - pre[i+1];
            final = i;
            
        }
    }
    cout<<max+1<<" "<<final+1<<endl;


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