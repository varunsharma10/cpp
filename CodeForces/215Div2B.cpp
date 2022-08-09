#include<bits/stdc++.h>
using namespace std;
int main()
{   
    bool v[100005];
    int dp[100005] ={0};
    int n,m;
    cin>>n>>m;
    int a[n+5];
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    for (int i = n; i >=1; i--)
    {
        if(!v[a[i]])
        {
            dp[i]++;
            v[a[i]]=true;
        }
    }
    for (int i = n; i >=1; i--)
    {
        dp[i]+=dp[i+1];
    }
    while(m--)
    {   
        int t;
        cin>>t;
        cout<<dp[t]<<endl;
    }
    
    
}
