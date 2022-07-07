#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int dpf[n+1] = {0};
    int dpb[n+1] = {0};

    for(int i=k;i<n;i++)
    {
        dpf[i] = arr[i] + max(dpf[i-1] , dpf[i-2]);
    }
    dpb[0] = arr[0];
    dpb[1] = arr[1] + arr[0];
    for(int i=2;i<n;i++)
    {
        dpb[i] = arr[i] + max(dpb[i-1] , dpb[i-2]);
    }
    int ans = INT_MIN;
    for(int i=0;i<n;i++)
    {
        ans = max(ans , dpf[i] + dpb[i] - arr[i]);
    }
    cout<<ans<<endl;
}