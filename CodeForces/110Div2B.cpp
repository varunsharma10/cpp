#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
float area(int radius) {
    double pi=2*acos(0.0);
   return pi * (radius * radius);
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    double ans=0;
    if(n%2!=0)
    {
        ans=area(arr[0]);
        for(int i=1;i<n;i+=2)
        {
            ans+=abs((area(arr[i]) - area(arr[i+1])));
        }
        cout<<ans<<endl;
    }
    else
    {   
        ans=0;
        for(int i=1;i<n;i+=2)
        {
            ans+=abs((area(arr[i])-area(arr[i-1])));
        }
        cout<<ans<<endl;
    }
    
    

}