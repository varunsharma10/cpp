#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
const int N = 51;

int n, m;
int arr[N][N];
void solve()
{    
    cin>>n>>m;
    set< int > r, c;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 1)
            {
                r.insert(i);
                c.insert(j);
            }
        }
    }
    int mn = min(n-r.size(),m-c.size());
    if(mn%2==1)
    {
        cout<<"Ashish"<<endl;
    }
    else
    {
        cout<<"Vivek"<<endl;
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