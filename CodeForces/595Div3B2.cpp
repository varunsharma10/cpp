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
        arr[i]--;
    }       
    vector<int>ans(n);
    vector<int>present(n);
    for(int i=0;i<n;i++)
    {
        if(!present[i])
        {
            vector<int>curr;
            while(!present[i])
            {
                curr.push_back(i);
                present[i] = 1;
                i = arr[i];
            }
            for(auto c : curr)
            {
                ans[c] = curr.size();
            }
        }
    }
    for(int i=0;i<n;i++)
    {
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