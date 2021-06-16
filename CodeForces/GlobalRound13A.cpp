#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int one=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            one++;
        }
    }
    while(q--)
    {
        int t,x;
        cin>>t>>x;
        if(t==1)
        {
           if(arr[x-1]==1)
           {    
               arr[x-1]=1-arr[x-1];
               --one;
           }
           else
           {
               arr[x-1]=1-arr[x-1];
               ++one;
           }
        }
        if(t==2)
        {
            if(x<=one){
                cout<<1<<endl;
            }
            
           else
            cout<<0<<endl;
        }
    }
    
    
}