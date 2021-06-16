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
    int mini=INT_MAX;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mini=min(mini,arr[i]);
        sum+=arr[i];
    }    
    double x = sum/n;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        ans++;
    }   
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==mini)
        count++;
    }
    cout<<max(n-count,ans)<<endl;


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