#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int seq[6];
void solve()
{    
    int n;
    cin>>n;
    int arr[n];
    
    vector<int> p({4, 8, 15, 16, 23, 42});
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i] = lower_bound(p.begin(),p.end(),arr[i]) - p.begin();
    }
    for(int i=0;i<n;i++)
    {   
        if(arr[i]==0)
        {
            seq[0]++;
        }
        else
        {
            if(seq[arr[i]-1] > 0)
            {
                seq[arr[i]-1]--;
                seq[arr[i]]++;
            }
        }
    }
    cout<<n-seq[5]*6<<endl;
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