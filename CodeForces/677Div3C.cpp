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
    int maxx = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        maxx = max(arr[i],maxx);
    }       
    int idx = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != maxx)
            continue;

        if(i > 0 && arr[i-1] != maxx)
            idx = i+1;
        if(i < n-1 && arr[i+1] != maxx)
            idx = i+1;
    }
    cout<<idx<<endl;

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