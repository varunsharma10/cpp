#include<bits/stdc++.h>
using namespace std;
long long arr[100];
bool subSum(int *a , int n, int i,int j)
{
    if(i==n)
    {
        int ans=0;
        for(int k=0;k<j;k++)
        {
            ans+=arr[k];
            if(ans==0)
                return true;
        }  
        return false;
    }

    int ans=0;
    for(int k=0;k<j;k++)
    {
        ans+=arr[k];
        if(ans==0)
            return true;
    }
    if(ans==0&&j!=0)
        return 1;

    arr[j]=a[i];

    if(subSum(a ,n,i+1,j+1))
        return true;

    if(subSum(a , n,i+1,j))
        return true;
    
    return false;
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<subSum(a , n , 0 , 0)<<endl;
}