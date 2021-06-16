#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    int ans=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i <n; i++)
    {
        int j= max(arr[i],arr[i-1]);
        int k= min(arr[i],arr[i-1]);
        
        if(j<=(2*k))
        {
            continue;
        }
        else
        {   
            int x=k;
            while(x*2<j)
            {   
                ans++;
                x=x*2;
            }
        
        }
        
        
    }
    cout<<ans<<endl;
    
    
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}