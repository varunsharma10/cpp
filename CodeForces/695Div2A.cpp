#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int x;
    if(n==1)
    {
        cout<<9<<endl;
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            arr[i]=8;
        }
        
    }
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(i==0)
        {
            arr[i]=arr[i]+1;
        }
        else
        {
            if(arr[i]+j >=10)
            {
                arr[i] = (arr[i]+j)%10;
                j++;
            }
            else 
            {
                arr[i]=arr[i]+j;
                j++;
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
