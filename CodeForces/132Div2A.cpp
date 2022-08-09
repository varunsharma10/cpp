#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    int dif=0;
    int max1=0;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if(arr2[j]%arr[i]==0)
            {
                dif=arr2[j]/arr[i];
                max1=max(max1,dif);
            }
        }
        
    }
    int d=0;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if(arr2[j]%arr[i]==0)
            {
                dif=arr2[j]/arr[i];
                if(dif==max1)
                {
                    d++;
                }
            }
        }
        
    }
    cout<<d<<endl;
    
    
    
    
}
