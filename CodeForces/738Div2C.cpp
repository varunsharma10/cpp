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
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(arr[n-1] == 0)
    {
        for(int i=1;i<=n+1;i++)
        {
            ans.push_back(i);
        }
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    else if(arr[0] == 1)
    {   
        ans.push_back(n+1);
        for(int i=1;i<=n;i++)
        {
            ans.push_back(i);
        }
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    else if(arr[0] == 0 && arr[n-1] == 1)
    {   
        int i=0;
        while(arr[i] != 0 || arr[i+1] != 1 )
        {   
            cout<<i+1<<" ";
            i++;
        }
        i++;
        cout<<i<<" ";
        cout<<n+1<<" ";
        i++;
        while(i<=n)
        {
            cout<<i<<" ";
            i++;
        }
        cout<<endl;

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