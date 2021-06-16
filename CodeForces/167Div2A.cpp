#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    if((sum)%(n)==0)
    {
        cout<<2<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
    
    
}
