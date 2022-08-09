#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        arr[i] = max(arr[i] + i , arr[i-1]);
    }
    int ans = 0;
    int i = 0;
    while(i < n-1)
    {
        ans++;
        i = arr[i];
    }
    cout<<ans<<endl;

    
    

}