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
    int tmp[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        tmp[i] = arr[i];
    }
    int count = 0;
    sort(arr , arr+n);       
    for(int i=0;i<n;i++)
    {
        if(arr[i] != tmp[i])
        {
            count++;
        }
    }
    if(count > 2)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
    }
    
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}