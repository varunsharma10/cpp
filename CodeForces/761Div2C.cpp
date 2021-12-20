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
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    vector<int>has(n+1 , 0);
    vector<int>ele;
    for(int i=1;i<=n;i++)
    {
        if(arr[i] <=n && has[arr[i]] == 0)
            has[arr[i]] =1;
        else
            ele.push_back(arr[i]);
    }
    sort(ele.begin(), ele.end());
    vector<int>idx;
    bool ok = true;
    for(int i=1;i<n+1;i++)
    {
        if(has[i] == 0)
            idx.push_back(i);
    }
    for(int i=0;i<ele.size();i++)
    {
        if(idx[i]*2 >= ele[i])
            ok = false;
    }
    if(ok == true)
    {
        cout<<ele.size()<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
    
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