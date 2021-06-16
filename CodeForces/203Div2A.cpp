#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    int arr2[m];
    int max=0;
    int ans=1;
    int min =INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]>=max)
        {
            max=arr[i];
        }
        if(arr[i]<=min)
        {
            min=arr[i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
        if(arr2[i]<= max)
        {
            ans=0;
        }
    }
    if(2*min <= max && ans==1)
    {
        cout<<max<<endl;
        return 0;
    }
    int k=2*min;
    if(2*min > max)
    {
        for (int i = 0; i < m; i++)
        {
            if(arr2[i] <= k)
            {
                ans=0;
                break;
            }
            else
            {
                ans=1;
            }
            
        }
        if(ans==1)
        {
            cout<<k<<endl;
            return 0;
        }
        
    }
   if(ans==0)
   {
       cout<<-1<<endl;
   }
    
}
