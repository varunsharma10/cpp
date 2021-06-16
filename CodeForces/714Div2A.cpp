#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    if(n%2==0)
    {
        if(k>=n/2)
        {
            cout<<-1<<endl;
            return;
        }
    }
    else
    {
        if(k>n/2)
        {
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=1;i<=n;i++)
    {
        arr[i]=i;
    }
    int i=2;
    while(k>0)
    {
        swap(arr[i],arr[i+1]);
        i+=2;
        k--;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
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