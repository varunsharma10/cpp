#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    int arr[12];
    int sum2=0;
    for (int i = 0; i < 12; i++)
    {
        cin>>arr[i];
        sum2=sum2+arr[i];
    }
    if(sum2<k)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(k==0)
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {
        int sum=0;
    int cnt=0;
    sort(arr,arr+12,greater<int>());
    for (int i = 0; i < 12; i++)
    {   
        cnt++;
        sum=sum+arr[i];
        if(sum>=k)
        {
            break;
        }
        
    }
    cout<<cnt<<endl;
    
    }
    
    
    
}
