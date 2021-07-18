#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,k;
    cin>>n>>k;
    int arr[n];
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }       
    if(s.size() > k)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<n*k<<endl;
    for(int j = 0 ;j<n;j++)
    {
    for(int i : s)
    {
        cout<<i<<" ";
    }
    for(int i=0;i<k-s.size();i++)
    {
        cout<<1<<" ";
    }
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