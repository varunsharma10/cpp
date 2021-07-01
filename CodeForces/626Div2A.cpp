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
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<1<<endl;
            cout<<i+1<<endl;
            return;
        }
    }
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(arr[i] % 2 == 1)
        {
            ans.push_back(i+1);
        }
    }
    if(ans.size()==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<2<<endl;
        cout<<ans[0]<<" "<<ans[1]<<endl;
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