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
    vector<string>arr(n-2);
    for(int i=0;i<n-2;i++)
    {
        cin>>arr[i];
    }
    string ans = "";
    ans+=arr[0];
    for(ll i=0;i<n-3;i++) 
    {
        if(ans[ans.size()-1]!=arr[i+1][0]) 
        {
            ans+=arr[i+1];
        }
        else
            ans+=arr[i+1][1];
    }
    if(ans.size()!=n) 
    {
        if(ans[0]=='b') 
        {
            for(int i=0;i<n-ans.size();i++)
            {
                ans+="a"; 
            }
        }
        else 
        {
            for(int i=0;i<n-ans.size();i++)
            {
                ans+="b";
            }
        }
    }
    cout<<ans<<"\n";

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