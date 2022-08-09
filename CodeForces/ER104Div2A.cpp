#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int ans=0;
    int min=INT_MAX;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
   
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==min)
        {
            ans++;
        }
    }
    cout<<abs(n-ans)<<endl;
    
    
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