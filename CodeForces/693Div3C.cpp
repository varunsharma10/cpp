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
    vector<int>dp(n);
    for(int i=n-1;i>=0;i--)
    {
        dp[i] = arr[i];
        int tmp = i + arr[i];

        if(tmp < n)
        {
            dp[i] += dp[tmp];
        }

    }
    int maxx = *max_element(dp.begin(),dp.end());
    cout<<maxx<<endl;
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