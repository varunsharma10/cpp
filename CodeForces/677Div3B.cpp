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
    int idx1 = 0;
    int idx2 = n-1;
    while(arr[idx1] != 1)
    {
        idx1++;
    }
    while(arr[idx2] != 1)
    {
        idx2--;
    }
    int count = 0;
    for(int i=idx1 ;i<=idx2;i++)
    {
        if(arr[i] == 0)
        count++;
    }
    cout<<count<<endl;

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