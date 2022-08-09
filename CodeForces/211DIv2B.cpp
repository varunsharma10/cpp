#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int sum[1000000];
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        sum[i]=sum[i-1]+arr[i];
    }
    int ap=0;
    int as=sum[k];
    for (int i=k+1;i<=n;i++)
    {
        if (sum[i]-sum[i-k]<as)
        {
            as=sum[i]-sum[i-k];
            ap=i-k;
        }
    }
    cout<<ap+1<<endl;
}