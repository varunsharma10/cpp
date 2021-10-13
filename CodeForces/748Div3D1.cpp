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
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) 
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int ans=0;
    for(int i = 0;i < n-1;i++) 
    {
        int tmp = __gcd(ans,arr[i+1]-arr[i]);
        ans  = tmp;
    }
    if(ans == 0)
    {
        cout<<-1<<endl;
        return;
    }
    cout << ans <<endl;  
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