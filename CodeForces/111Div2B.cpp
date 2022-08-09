#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[2*n];
    int max1=0;
    int max2=0;
    for (int i = 0; i < 2*n; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < n; i++)
    {   
        if(arr1[i]>max1)
        {
            max1=arr1[i];
        }
    }
    for (int i = n; i < 2*n; i++)
    {   
        if(arr1[i]>max2)
        {
            max2=arr1[i];
        }
    }
    cout<<max1<<" "<<max2;
    if(max1>max2)
    {
        for (int i = 0; i < n; i++)
        {
            if(arr1[i]<max2)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            else
            {
                cout<<"YES"<<endl;
                return 0;
            }
            
        }
    }
    if(max2>max1)
    {
        for (int i = n; i < n; i++)
        {
            if(arr1[i]<max1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            else
            {
                cout<<"YES"<<endl;
                return 0;
            }
            
        }
    }
    else
    {
        cout<<"NO"<<endl;
        return 0;
    }
    
    
}
