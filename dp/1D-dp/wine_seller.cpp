#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int profit(int i , int j , int dp[][100] , int arr[] , int y)
{
    if(i > j)
        return 0;
    
    if(dp[i][j] != -1)
        return dp[i][j];

    int x = y*arr[i] + profit(i+1 , j , dp , arr , y+1);
    int z = y*arr[j] + profit(i , j-1 , dp , arr , y+1);

    return dp[i][j] = max(x , z);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    memset(dp , -1  ,sizeof(dp));
    int i = 0;
    int j = n-1;
    int y = 1;
    cout<<profit(i , j , dp , arr , y);
    
}