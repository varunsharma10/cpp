#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]==arr[i+1])
        {
            arr[i+1]++;
        }
    }
    sort(arr, arr + n); 
    int res = 0; 
    for (int i = 0; i < n; i++) { 
        while (i < n - 1 && arr[i] == arr[i + 1]) 
            i++; 
  
        res++; 
    } 
    
    cout<<res<<endl;

    
    
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
