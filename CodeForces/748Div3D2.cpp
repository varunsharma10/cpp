#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
map<pair<pair<int,int>,pair<int,int> >,int> res;

int rec(int i ,int l,int count,vector<int> &a,int ans) {
    if(i >=a.size() ) 
    {
        if(count == 0)
            return ans;
        else
            return 0;
    }
    if(res.find({{i,count},{l,ans}}) != res.end()) 
    {
        return res[{{i,count},{l,ans}}];
    }
    else if(res.find({{i,count},{l,ans}}) == res.end()) 
    {
        res[{{i,count},{l,ans}}] = max(rec(i+1,i,count-1,a,__gcd(ans,a[i]-a[l])), rec(i+1,l,count,a,ans));
    }
    return res[{{i,count},{l,ans}}];
}
void solve()
{    
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++) 
    {
        cin>>arr[i];
    }
    res.clear();
    map<int,int> cnt;
    sort(arr.begin(),arr.end());
    bool ok = true;;
    for(int i = 0 ; i < arr.size() ; i++) 
    {
        cnt[arr[i]]++;
        if(cnt[arr[i]] < (n/2)) 
        {
            continue;
        }
        else
            ok = false;
    }
    if(!ok) 
    {
        cout << -1 << endl;
        return;
    }
    int res=0;
    for(int i = 0 ; i < n ; i++) 
    {
        int tmp = rec(i+1,i,n/2-1,arr,0);
        res = max(res,tmp);
    }
    if(res == 0)
        cout<<-1<<endl;
    else
        cout<<res<<endl;
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