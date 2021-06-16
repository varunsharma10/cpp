#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q=0;
    double m;
    
    cin>>n>>m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max=ceil(arr[0]/m);
    
    for (int i = 1; i <n; i++)
    {
        if(ceil(arr[i]/m)>=max)
        {   
            max=ceil(arr[i]/m);
            q=i;
        }
        
    }
    cout<<q+1<<endl;


    
    
}
