#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define N 2010
int arr[N][N];
int c[N];
void solve()
{    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[0][i];
    }           
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            c[j]=0;
        for(int j=1;j<=n;j++)
            ++c[arr[i-1][j]];
        for(int j=1;j<=n;j++)
            arr[i][j]=c[arr[i-1][j]];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int k,x;
        cin>>x>>k;
        if(k>n)
            k=n;

        cout<<arr[k][x]<<endl;
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