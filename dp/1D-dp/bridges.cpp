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
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<pair<int,int>>ed;
    for(int i=0;i<n;i++)
    {
        ed.push_back({arr[i] , b[i]});
    }
    sort(ed.begin() , ed.end());
    vector<int>dp(n+1 , 0);
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        dp[i] = 1;
        for(int j=i-1;j>=0;j--)
        {
            if(ed[i].second >= ed[j].second)
            {
                dp[i] = max(dp[i] , dp[j]+1);
            }
        }
        ans = max(ans , dp[i]);
    }
    cout<<ans<<endl;
}