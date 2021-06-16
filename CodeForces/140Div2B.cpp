#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    const int N = int(1e5 + 3);
    int num;
    cin>>n;
    int arr[N];
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        arr[num]=i+1;
    }
    int m;
    cin>>m;
    int q;
    int a=0,b=0;
    for (int i = 0; i < m; i++)
    {
        cin>>q;
        a=a+arr[q];
        b=b + n-arr[q]+1;
        
    }
    cout<<a<<" "<<b<<endl;
    
    
    
    
}
