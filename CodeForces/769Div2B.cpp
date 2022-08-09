#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
void solve()
{    
    int n;
    cin>>n;
    vector<int>arr(n);
    bool ok = false;
    int i = n-1;
    while(i > 0)
    {
        // if(i == 0)
        //     break;
        cout<<i<<" ";
        if(isPowerOfTwo(i) == true && ok == false)
        {
            // arr.push_back(i);
            // arr.push_back(0);
            cout<<0<<" ";
            // i--;
            ok = true;
        }
    
        i--;
    }
    cout<<endl;
    // for(autoit : arr)
    //     cout<<it<<" ";
    // cout<<endl;
    // for(auto it : arr)
    //     cout<<it<<" ";
    // cout<<endl;
    int ans = 0;
    int tmp1 = 0;
    int tmp2 = 0;
    for(int i=0;i<n-1;i++)
    {
        if(ans < (arr[i] ^ arr[i+1]))
        {
            ans = (arr[i] ^ arr[i+1]);
            tmp1 = arr[i];
            tmp2 = arr[i+1];
        }
        // ans = max(arr[i] ^ arr[i+1], ans);
    }
    // cout<<ans<<endl;
    // cout<<tmp1<<" "<<tmp2<<" ";
    // cout<<endl;
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