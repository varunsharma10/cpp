#include<bits/stdc++.h>
using namespace std;
map<pair<int,int> , int>mp;
long long arr[18000];
long long pre[18000];
int solve(int i , int j)
{   

    if(i >= j)
        return 0;
    
    if(mp.find({i,j}) != mp.end())
        return mp[{i,j}];
    
    int total = pre[j] - (i > 0 ? pre[i-1] : 0);
    if(total % 2 != 0)
        return 0;
    
    int sum = 0;
    bool flag = false;
    int idx = -1;
    for(int it = i;it<=j;it++)
    {
        sum+=arr[it];
        if(sum == total / 2)
        {
            idx = it;
            flag = true;
            break;
        }
    }
    if(flag == false)
        return 0;
    
    return mp[{i,j}] = 1 + max(solve(i , idx) , solve(idx+1 , j));
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    pre[0] = arr[0];
    for(int i=1;i<n;i++)
    {
        pre[i] = pre[i-1] + arr[i];
    }
    cout<<solve(0 , n-1)<<endl;
      
}