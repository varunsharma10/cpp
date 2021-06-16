#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n ,k;
    cin>>n>>k;
    ll arr[n];
    ll count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2!=0)
        count++;
    }      
    if(count < k || count%2 != k%2)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        if(k==1)break;
        else
        {
            if(arr[i] % 2 == 1)
            {
                cout<<i+1<<" ";
                k--;
            }
        }
        
    }
    cout<<n<<endl;

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