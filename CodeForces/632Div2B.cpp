#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n;
    cin>>n;
    ll arr[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }       
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    if(arr[0] != arr2[0])
    {
        cout<<"NO"<<endl;
        return;
    }
        vector<int> good(2, 0);
    for (int i = 0; i < n; ++i) {
        if (arr[i] > arr2[i] && !good[0]) {
            cout << "NO\n";
            return;
        } else if (arr[i] < arr2[i] && !good[1]) {
            cout << "NO\n";
            return;
        }
        if (arr[i] == -1) good[0] = 1;
        if (arr[i] == 1) good[1] = 1;
    }
    cout<<"YES"<<endl;
    
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