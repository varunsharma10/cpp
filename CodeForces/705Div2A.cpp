#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=k+1; i<=n; i++)
    {
        v.push_back(i);
    }
    for(int i=(k+1)/2 ; i<=k-1;i++)
    {
        v.push_back(i);
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
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