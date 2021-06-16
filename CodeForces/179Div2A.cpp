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
    int conti=1;
    int max=1;
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==arr[i+1])
        {
            conti++;
            if(conti>=max)
            {
                max=conti;
            }
        }
        else
        {
            conti=1;
        }
        
    }
    if(max<=(n+1)/2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
}
