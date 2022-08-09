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
    ll arr[n];
    ll b[n];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }       
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    if(is_sorted(arr,arr+n))
    {
        cout<<"Yes"<<endl;
        return;
    }
    int one = 0;
    int zero = 0;
    for(int i=0;i<n;i++)
    {
        if(b[i] == 1){

            one++;
        }
        else
        {
            zero++;
        }
    }
    if(zero>0 && one > 0)
    {
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;

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