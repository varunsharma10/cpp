#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    map<ll,ll>mp;
    priority_queue<pair<ll,ll>>q;
    ll n;
    cin>>n;
    ll arr[n+1];
    for(ll i=1;i<=n;i++)
    {
        cin>>arr[i];
        q.push({arr[i], i});
    }
    vector<ll>ans(n+1 , 0);
    ans[0]=0;
    ll left = 1;
    ll right = -1;
    bool chance = false;
    ll res = 0;
    while(!q.empty())
    {
        auto tmp = q.top();
        q.pop();
        if(chance == false)
        {   
            ans[tmp.second] = left;
            res += 2*(abs(left))*tmp.first;
            left++;
            chance = true;
        }
        else
        {
            ans[tmp.second] = right;
            res += 2*(abs(right))*tmp.first;
            right--;
            chance = false;
        }
    }
    cout<<res<<endl;
    for(auto it : ans)
    {
        cout<<it<<" "; 
    }
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