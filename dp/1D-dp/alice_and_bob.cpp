#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    vector<int>b;
    for(auto it : mp)
    {
        b.push_back(it.first);
    }
    n = b.size();

    int dp[n+1] = {0};
    dp[0] = mp[b[0]]*b[0];
    for(int i=1;i<n;i++)
    {
        if(b[i] == b[i-1] + 1)
        {
            int tmp = mp[b[i]]*b[i];
            if(i >=2)
                tmp += dp[i-2];
            dp[i] = max(dp[i-1] , tmp);
        }
        else
            dp[i] = dp[i-1] + mp[b[i]]*b[i];
    }
    cout<<dp[n-1]<<endl;


}