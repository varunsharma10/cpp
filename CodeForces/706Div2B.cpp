#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    unordered_map<int, int> mp;
    int max1=INT_MIN;
    int uni=0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        max1=max(max1,a);
        mp[a]++;
        if(mp[a]==1)
        {
            uni++;
        }
    }
    int mex=INT_MAX;
    for (int i = 0; i < max1+1; i++)
    {
        if(!mp[i])
        {
            mex=i;
            break;
        }
    }
    if(max1>mex && k!=0)
    {
        int x;
        x=(max1+mex+1)/2;
        mp[x]++;
        if(mp[x]==1)
        {
            uni++;
        }
    }
    else if(mex>max1 && k!=0)
    {
        uni=uni+k;
    }
    cout<<uni<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}