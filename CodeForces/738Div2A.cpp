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
    vector<int>ans;
    int maxx = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        maxx = max(maxx,arr[i]);
    }      
    int x = arr[0];
    for(int i=1;i<n;i++)
    {
        x&=arr[i];
    }
    cout<<x<<endl;
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