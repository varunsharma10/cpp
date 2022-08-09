#include<bits/stdc++.h>
using namespace std;
int n;
int arr[26];
int dp[100001];
const int mod = 1e9+7;
string s;
bool isvalid(int i , int j)
{
    for(int it = i;it<=j;it++)
    {
        if(arr[s[i]-'a'] < (j-i+1))
            return false;
    }
    return true;
}
int main()
{
    cin>>n;
    cin>>s;
    s = "*" + s;
    for(int i=0;i<26;i++)
    {
        cin>>arr[i];
    }
    dp[0] = 1;
    int maxx = INT_MIN;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>=0;j--)
        {
            if(isvalid(j , i))
            {
                maxx = max(maxx , i-j+1);
                dp[i] += dp[j-1]%mod;
                dp[i] %=mod;
            }
        }
    }
    cout<<dp[n-1]<<endl;
}