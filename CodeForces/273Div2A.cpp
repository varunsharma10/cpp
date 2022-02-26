#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int arr[5];
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }       
    if(sum == 0)
    {
        cout<<-1<<endl;
        return;
    }
    if(sum % 5 == 0)
    {
        cout<<sum/5<<endl;
    }
    else
    {
        cout<<-1<<endl;
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