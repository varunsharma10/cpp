#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int dp[n];
    dp[0] = 1;
    for(int i=1;i<n;i++)
	{
		dp[i]=0;
		if(arr[i])
			continue;
		for(int j=i-1;j>=max(0,i-k);j--)
		{
			dp[i]=(dp[i]+dp[j]);
		}
	}
    
    cout<<dp[n-1]<<endl;

}