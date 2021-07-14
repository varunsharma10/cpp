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
    vector<int>y;
    y.push_back(0);
    for(int i=1;i<n;i++)
    {
        int prev = arr[i-1]^y.back();
        int curr = arr[i];
        int add = 0;
        for(int j=0;j<30;j++)
        {
            if(prev & (1ll<<j))
            {
                if(curr & (1ll<<j))
                {

                }
                else
                {
                    add|=(1ll<<j);
                }
            }
        }
        y.push_back(add);
    }
    for(auto i : y)
    {
        cout<<i<<" ";
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