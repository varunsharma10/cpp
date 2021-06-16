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
    int arr[n][m];
    int sum=0;
    int cnt =0;
    int minn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]<0)
            {
                cnt++;
            }
            minn = min(minn , abs(arr[i][j]));
            sum+=abs(arr[i][j]);

        }
    }       
    if(cnt%2==0)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<sum - (2*minn)<<endl;
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