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
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<bool>vis(n+1 , false);       
    bool ans = true;
    for(auto it : arr)
    {
        int x = it;
        while(x > n || vis[x])
            x = x/2;
        
        if(x > 0)
        {
            vis[x] = true;
        }
        else
            ans = false;
    }
    if(ans == true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

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