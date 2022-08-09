#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    map<long long,long long>mp;
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    vector<long long>a;
    for(auto it : mp)
    {
        a.push_back(it.first);
    }
    n = a.size();

    long long dp[n+1];
    dp[0] = mp[a[0]]*a[0];
    // dp[1] = max(mp[a[1]]*a[1] , mp[a[0]]*a[0]); 
    for(long long i=1;i<n;i++)
    {
        if(a[i] == a[i-1] + 1)
        {
            long long tmp = mp[a[i]]*a[i];
            if(i >=2)
                tmp += dp[i-2];
            dp[i] = max(dp[i-1] , tmp);
        }
        else
            dp[i] = dp[i-1] + mp[a[i]]*a[i];
    }
    cout<<dp[n-1]<<endl;
}