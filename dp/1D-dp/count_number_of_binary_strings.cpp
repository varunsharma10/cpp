#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    a[0] = 1;
    b[0] = 1;
    for(int i=1;i<n;i++)
    {
        a[i] = a[i-1] + b[i-1];
        b[i] = a[i-1];
    }
    cout<<a[n-1] + b[n-1]<<endl;
}