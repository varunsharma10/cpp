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
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }       
    int pre = -1;
    int suf = n-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<i)
        break;
        pre = i;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i] < n-1-i)
        {
            break;
        }
        suf = i;
    }
    if(suf <= pre)
    {
        cout<<"Yes"<<endl;
    }
    else
    cout<<"No"<<endl;
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