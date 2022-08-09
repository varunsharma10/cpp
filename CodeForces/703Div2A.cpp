#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    long long arr[n+5];
    for (long long i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (long long i = 0; i < n; i++)
    {
        if(arr[i]>=i)
        {
            arr[i+1]+=arr[i] -i;
            arr[i]=i;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    
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