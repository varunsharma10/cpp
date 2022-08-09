#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,k;
    cin>>n>>k;
    int arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }       
    ll ans=INT_MAX;
    for(auto c : mp)
    {
        int f = c.first;
        ll mn =0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=f)
            {
                mn++;
                i+=k-1;
            }
        }
        ans = min(ans,mn);
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