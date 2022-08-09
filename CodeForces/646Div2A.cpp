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
    int count=0;
    int count2=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2!=0)
        {
            count++;
        }
        else
        {
            count2++;
        }
        
    }      
    int m=min(count2,x-1);
        int d=x-m;
        if(d%2==0)
        {
            d++;
        }
        if(count>=d && d<=x)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
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