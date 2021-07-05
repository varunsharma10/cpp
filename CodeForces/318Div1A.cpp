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
    ll arr[n];
    ll maxx = INT_MIN;
    ll idx = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        while(arr[i]%2==0)
        arr[i]/=2;
        while(arr[i]%3==0)
        arr[i]/=3;
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[0])
        {
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;


}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}