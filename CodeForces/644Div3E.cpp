#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int arr[50][50];
void solve()
{    
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           char c;
           cin>>c;
           arr[i][j] = c-'0';
        }
    }       
    bool ok = true;
    for(int i=n-2;i>=0;i--)
    {
        for(int j=n-2;j>=0;j--)
        {
            if(arr[i][j] && !arr[i+1][j] && !arr[i][j+1] )
            {
                ok = false;
            }
        }
    }
    if(ok){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
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