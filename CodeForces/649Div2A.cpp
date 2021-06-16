#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,x;
    cin>>n>>x;
    int arr[n];
    bool ok =false;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%x!=0)
        {
            ok =true;
        }
        sum+=arr[i];
    }     
    if(!ok)
    {
        cout<<-1<<endl;
        return;
    }
    if(sum%x!=0)
    {
        cout<<n<<endl;
        return;
    }
    int count=1;
    int count1=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%x!=0)
        {
            break;
        }
        else
        {
            count++;
        }    
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]%x!=0)
        {
            break;
        }
        else
        {
            count1++;
        }
    }
    int ans = min(count1,count);
    cout<<n-ans<<endl;

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