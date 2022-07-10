#include<bits/stdc++.h>
using namespace std;
int dp[10005][10005];
int solve(int i , int j , int n , int m , int arr[] , int b[])
{
    if(i == n)
        return 0;
    if(j == m)
        return 100005;

    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int op1 = abs(arr[i] - b[j]) + solve(i+1 , j+1 , n , m , arr , b);
    int op2 = solve(i , j+1 , n , m , arr , b);
    return dp[i][j] = min(op1 , op2);
    
}
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n] , b[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    memset(dp , -1 , sizeof(dp));
    sort(arr , arr+n);
    sort(b , b+m);
    // cout<<dp[0][0]<<endl;
    cout<<solve(0 , 0 , n , m, arr , b)<<endl;
    

}