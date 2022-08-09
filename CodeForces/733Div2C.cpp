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
    int tmp = n;
    int arr[n];
    int b[n];
    int sum = 0 ;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }       
    int maxx = 0;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        maxx+=b[i];
    }
    sort(arr,arr+n);
    sort(b,b+n);
    int k = n/4;
    for(int i=0;i<k;i++)
    {
        sum-=arr[i];
        maxx-=b[i];
    }
    if(sum>=maxx)
    {
        cout<<0<<endl;
        return;
    }
        int x=k;
        int y=k-1;
        int r =n;
        int ans=0;
 
        int zero = 0;
        while(true)
        {
            if(sum>=maxx)
            {
                break;
            }
            sum += 100;
            zero++;
            if (y >= 0)
            {
                maxx += b[y];
                y--;
            }
            r++;
            if(r/4 > k)
            {
                k++;
                sum -= arr[x];
                x++;
 
                if(zero<k)
                {
                    maxx -= b[y+1];
                    y++;
                }
            }
            ans++;
 
        }
        cout<<ans<<"\n";
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