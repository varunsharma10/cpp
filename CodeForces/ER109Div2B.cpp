#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int ans[51];
int n;
int arr[51];
bool check()
{
    for(int i=1;i<=n;i++)
    {
        if(arr[i]!=i)
        {
            return false;
        }
    }
    return true;
}
void solve()
{    
    cin>>n;
    vector<int>v,v1;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }      
    int ans=0;
    bool ok=false;
    if(check()==true)
    {
        cout<<0<<endl;
        return;
    }
    if(arr[1]==n && arr[n]==1)
    {
        cout<<3<<endl;
        return;
    }
    if(arr[1]==1 && arr[n]==n)
    {
        cout<<1<<endl;
        return;
    }
    if(arr[1]!=1 && arr[n]==n)
    {
        cout<<1<<endl;
        return;
    }
    if(arr[1]==1 && arr[n]!=n)
    {
        cout<<1<<endl;
        return;
    }
    else
    {
        cout<<2<<endl;
        return;
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