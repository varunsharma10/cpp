#include<bits/stdc++.h>
using namespace std;
int dp[200][200];
int solve(int i , int j , int n, int arr[])
{
    if(i > j)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
    
    int op1 = arr[i] + min(solve(i+1 , j-1 , n , arr) , solve(i+2 , j , n , arr));
    int op2 = arr[j] + min(solve(i+1 , j-1 , n , arr) , solve(i , j-2 , n , arr));
    return dp[i][j] = max(op1 , op2);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    memset(dp , -1 ,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<solve(0 , n-1 , n , arr)<<endl;
}