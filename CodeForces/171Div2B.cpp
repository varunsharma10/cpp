#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int cum_sum[100010];
int arr[100010];
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int n,m;
    cin>>n>>m;
   
    int sum=0;

    for(int i=1;i<=n;i++){
        cin>>arr[i];
        cum_sum[i]=cum_sum[i-1]+arr[i];
    }
    int ans=0;
    int p=0;
    for(int i=1;i<=n;i++){
        while(cum_sum[i]-cum_sum[p]>m)
        {
            p++;
        }
        ans=max(ans,i-p);
    }

    cout<<ans<<endl;
}