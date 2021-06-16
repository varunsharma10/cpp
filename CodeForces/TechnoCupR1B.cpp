#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
const int N=510;
int a[N][N];
int b[N][N];
int p[N*N];
void solve()
{    
    int n,m;
    cin>>n>>m;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++) 
        cin>>a[i][j],p[a[i][j]]=i;
    }
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++) 
        cin>>b[i][j];
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++) 
        cout<<a[p[b[1][i]]][j]<<" ";
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