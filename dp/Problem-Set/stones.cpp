#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    ll dp[k+1];
    int arr[n];
    dp[0] = 0;

    memset(dp , 0 , sizeof(dp));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=k;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j] > i)
                continue;
            
            if(dp[i - arr[j]] == 0)
            {
                dp[i] = 1;
            }
        }
        
    }
    if(dp[k] == 1)
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
    // cout<<dp[k]<<endl;
}