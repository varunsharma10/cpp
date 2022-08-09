#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int count=1;
    int sum=0;
    int sum2=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sort(arr,arr+n,greater<int>());
    for (int i = 0; i < n; i++)
    {
        sum2=sum2+arr[i];
        if(sum2<=sum-arr[i])
        {
            sum=sum-arr[i];

            count++;
        }   
        else
        {
            cout<<count<<endl;
            return 0;
        }
        
        
    }
    
    
}