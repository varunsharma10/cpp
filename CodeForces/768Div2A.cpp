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
    int a1[n],a2[n];
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>a2[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a1[i] > a2[i])
            swap(a1[i] , a2[i]);
    }
    int ans = 0;
    int ans2 = 0;
    for(int i=0;i<n;i++){
        ans = max(ans , a1[i]);
    }
    for(int i=0;i<n;i++)
    {
        ans2 = max(ans2 , a2[i]);
    }
    cout<<ans*ans2<<endl;
    

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