#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin>>arr[i];
    }
    int t=0;
    int sum=0;
    while((n-sum)>0)
    {
        for (int i = 0; i < 7; i++)
        {
            sum=sum+arr[i];
            t++;
           
            if(sum<n)
            {
                continue;
            }
            else
            {
                break;
            }
            
        }
    }
    if(t>7 && t%7!=0)
    {
        cout<<t%7<<endl;
    }
    if(t%7==0 && t>7)
    {
        cout<<7<<endl;
    }
    if(t<=7)
    {
        cout<<t<<endl;
    }
    
    
    
}
