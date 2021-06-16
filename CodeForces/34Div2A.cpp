#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int a,b;
    int min=0;
    int k=0;
    int dif=abs(arr[0] - arr[n-1]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            k = abs(arr[i] - arr[j]);
            if(k<=dif && (abs(j-i) == 1 || abs(j-i) == (n-1) ) )
            {   
                dif=k;
                a=i+1;
                b=j+1;
            }
        }
        
    }
    cout<<a<<' '<<b<<endl;
    
    
}
