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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans=0;
    for (int i = 1; i < n; i++)
    {   
        int x=0;
        if(arr[i-1]==arr[i]){
            arr[i]++;
            ans++;
        }
        else if(arr[i-1]>arr[i])
        {
            x=arr[i-1]-arr[i];
            ans+=x+1;
            arr[i]+=x+1;
        }
    }
    
    cout<<ans<<endl;
}