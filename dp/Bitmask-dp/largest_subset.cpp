#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll dp[51][(1 << 15) + 1];
ll arr[51];
ll n;
int prime[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
vector<int>check[51];

ll rec(int id, int mask)
{
    if(id == n) 
        return 0;

    ll &ret = dp[id][mask];

    if(ret != -1) 
        return ret;

    if(arr[id] == 1) 
        return ret = 1 + rec(id + 1, mask);

    ret = rec(id + 1, mask);

    for(int i = 0;i<check[arr[id]].size();i++)
    {
        ll u = check[arr[id]][i];
        if(mask & (1 << u)) 
            return ret;
        
        mask |= (1 << u);
    }
    ret = max(ret, 1 + rec(id + 1, mask));
    return ret;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<51;i++)
    {
        check[i].clear();
        for(int j=0;j<15;j++)
        {
            if(prime[j] > i)
                break;
            if(i % prime[j] == 0)
                check[i].push_back(j);
        }
    }
    memset(dp , -1 ,sizeof(dp));
    cout<<rec(0 , 0)<<endl;

}