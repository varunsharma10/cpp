#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int h,w;
    cin>>h>>w;
    int arr[h][w];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<h;i+=2)
    {
        arr[i][0] = 1;
    }
    for(int i=0;i<h;i+=2)
    {
        arr[i][w-1] = 1;
    }
    for(int i=2;i+2<w;i+=2)
    {
        arr[0][i] = 1;
    }  
    for(int i=2;i+2<w;i+=2)
    {
        arr[h-1][i] = 1;
    }  
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
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