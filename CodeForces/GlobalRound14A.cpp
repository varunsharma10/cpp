#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int cum[100010];
void solve()
{    
    int n,x;
    cin>>n>>x;
    int arr[n];
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    int skip=-1; 
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]==x)
        {   
            skip=i;
            continue;
        }
        else
        {
            sum+=arr[i];
        }
        
        
    }
    if(skip==n-1)
    {
        cout<<"NO"<<endl;
        return;
    }
    else if(skip==-1)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            if(i==skip)
            {
                continue;
            }
            else
            {
                cout<<arr[i]<<" ";
            }
            
        }
        cout<<arr[skip]<<" ";
        cout<<endl;
        return;

    }
    
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

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