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
    cout << setprecision(15) << fixed;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=arr[0];
    for(int i=1;i<n;i++)
    {
        if(abs(arr[i-1]-arr[i]) > 0)
        {
            ans+=abs(arr[i-1]-arr[i]);
        }
    }
    ans=ans+n;
    ans=ans+(n-1);
    cout<<ans<<endl;

}