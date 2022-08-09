#include <bits/stdc++.h>
#include<cmath>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,u,v;
    cin>>n>>u>>v;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    ll dif;
    ll min1=INT_MAX;
    ll min2=INT_MAX;
    for (ll i = 0; i < n-1; i++)
    {
        dif=abs(arr[i+1]-arr[i]);
        if(dif==0)
        {
            min1 = min(min1,u+v);
            min1= min(min1,2*v);
        }
        else if(dif==1)
        {
            min2=min(min2,u);
            min2=min(min2,v);
        }
        else
        {
            cout<<0<<endl;
            return;
        }
        
    }
    cout<<min(min1,min2)<<endl;
    
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}