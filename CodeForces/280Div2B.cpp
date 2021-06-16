#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main()
{   
    send help
    cout << setprecision(10) << fixed;
        ll n,l;
        cin>>n>>l;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        double dif=0;
        for(int i=0;i<n-1;i++)
        {
            
            if(abs(arr[i+1]-arr[i])>=dif)
            {
                dif=abs(arr[i+1]-arr[i]);
            }
        }
    double a=0,b=0;
    a=arr[0]-0;
    b=l-arr[n-1];
    cout<<max(dif/2,max(a,b))<<endl;
}