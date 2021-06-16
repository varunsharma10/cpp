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
    vector<int>ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }     
    sort(arr,arr+n);
    int x;
    if(n%2==0)
    {
        x=n/2-1;
    }
    else
    {
        x=n/2;
    }
    int y=x+1;
    while(x>=0 || y<=n-1)
    {   
        if(x>=0)
        {
            ans.push_back(arr[x]);
            x--;
        }
        
        if(y<=n-1)
        {
            ans.push_back(arr[y]);
            y++;
        }
        

    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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