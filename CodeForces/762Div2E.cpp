#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n;
    cin>>n;
    ll arr[n];
    map<ll,ll>mp;
    priority_queue<ll>q;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }   
    ll count = 0;
   
    sort(arr,arr+n);
    vector<ll>ans(n+1 , -1);
    stack<ll>s;
    for(ll i=0;i<=n;i++)
    {
        if(i > 0 && mp[i-1] == 0)
        {
            if(s.empty())
                break;

            ll j = s.top();
            s.pop();
            count += i - j -1;            
        }
        ans[i] = count + mp[i];
        while(i > 0 && mp[i-1] > 1)
        {
            mp[i-1]--;
            s.push(i-1);
        }

    }    
    
    for(auto it : ans)
        cout<<it<<" ";

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