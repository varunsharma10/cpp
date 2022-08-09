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
    int odd = 0;
    int oddidx = 0;
    int evenidx = 0;
    int even = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] % 2 == 0)
        {
            even++;
            evenidx = i;

        }
        else
        {
            odd++;
            oddidx = i;
        }
        
    }
    if(odd == 1)
    {
        cout<<oddidx+1<<endl;
    }
    else if(even == 1)
    {
        cout<<evenidx+1<<endl;
    }
    
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