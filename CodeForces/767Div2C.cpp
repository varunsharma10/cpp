#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve() {
    ll n;
    cin >> n;
    ll arr[n];
    vector<ll>ans[n+1];
    for (ll i = 0; i < n; i++) 
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        ans[arr[i]].push_back(i);
    }
    vector<ll>res;
    ll idx = 0;
    while(idx != n)
    {
        ll maxidx = idx;
        for(int i=0;i<=n;i++)
        {
            while(ans[i].size() > 0 && ans[i].back() < idx)
            {
                ans[i].pop_back();
            }
            if(ans[i].size() > 0)
            {
                maxidx = max(maxidx , ans[i].back());
            }
            else
            {
                res.push_back(i);
                idx = maxidx + 1;
                break;
            }
        }
    }
    cout<<res.size()<<endl;
    for(auto it : res)
    {
        cout<<it<<" ";
    }
    cout<<endl;




    return;
}
// void solve()
// {    
//     int n;
//     cin>>n;
//     int arr[n];
//     unordered_map<int,int>mp;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         mp[arr[i]]++;
//     }       
//     int i =0;
//     while(mp[i] != 0)
//     {
//         i++;
//     }
//     int k = 0;
//     vector<int>ans;
//     int mex = 0;
    


// }
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