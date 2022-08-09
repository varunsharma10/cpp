#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long ans=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {   
    

        ans+=abs(arr[i]-(i+1));
       
    }
    cout<<ans<<endl;
    
    
    
}