#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,k;
    cin>>n>>q>>k;
    int arr[n];
    for (int i = 1; i <n+1; i++)
    {
        cin>>arr[i];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int ans= k+arr[r]-arr[l]-2*(r-l)-1;
        cout<<ans<<endl;
    }
    
}