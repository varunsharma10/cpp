#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }       
    int minn[n];
    minn[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        minn[i] = min(arr[i] , minn[i+1]);
    }
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > minn[i])
            count++;
    }
    cout<<count<<endl;
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