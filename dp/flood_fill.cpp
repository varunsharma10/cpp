#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    arr.resize(unique(arr.begin() , arr.end()) - arr.begin());
    n = arr.size();
    int dp[n][n];
    for(int j=0;j<n;j++)
    {
        for(int i=j;i>=0;i--)
        {
            dp[i][j] = 1e9;
            if(i == j)
            {
                dp[i][j] = 0;
                continue;
            }
            else if(arr[i] == arr[j] && j > i + 1)
            {
                dp[i][j] = 1 + dp[i+1][j-1];
            }
            else
            {
                dp[i][j] = min({dp[i][j] , dp[i+1][j] + 1 , dp[i][j-1] + 1});
            }
        }
    }
    cout<<dp[0][n-1]<<endl;
}