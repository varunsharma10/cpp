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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }       
    string s;
    cin>>s;
    vector<pair<int,int>>like,dislike;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '1')
        {
            like.push_back({arr[i] , i});
        }
        else
        {
            dislike.push_back({arr[i] , i});
        }
    }
    sort(like.begin(),like.end() , greater<pair<int,int>>());
    sort(dislike.begin(),dislike.end() , greater<pair<int,int>>());
    vector<int>ans(n);
    int curr = n;
    for(auto it : like)
    {
        ans[it.second] = curr;
        curr--;
    }
    for(auto it : dislike)
    {
        ans[it.second] = curr;
        curr--;
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