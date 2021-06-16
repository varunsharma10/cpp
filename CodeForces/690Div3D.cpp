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
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=n;i>=1;i--)
    {   
       
        if(sum % (i) == 0 )
        {
            ll need=sum/(i);
            ll curr=0;
            bool ok = true;
            for(int j=0;j<n;j++)
            {
                curr+=arr[j];
                if(curr>need)
                {
                    ok = false;
                    break;
                }
                if(curr == need)
                {
                    curr=0;
                }
            }
            if(ok)
            {
                cout<<n-i<<endl;
                return;
            }
        }
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