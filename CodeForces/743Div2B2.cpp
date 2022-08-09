#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    unordered_map<int,int> mp;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    unordered_map<int,int> mini;
    mini[1]=mp[1];
    for(int i=3;i<=2*n-1;i+=2)
    {
        mini[i]=min(mini[i-2],mp[i]);
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        ans=min(ans,i+mini[tmp-1]);
    }
    cout<<ans<<endl;       
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