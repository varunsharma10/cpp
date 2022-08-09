#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int dp[n+1][n+1] = {0};
    for(int d=1;d<n;d++)
    {
        int r = 0;
        int c = d;
        while(c < n)
        {
            int val = INT_MAX;
            for(int k=r;k<c;k++)
            {
                val = min(val , dp[r][k] + dp[k+1][c] + arr[r-1]*arr[k]*arr[c]);
            }
            dp[r][c] = val;
            c++;
            r++;
        }
    }
    cout<<dp[1][n-1]<<endl;
}