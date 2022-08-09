#include<bits/stdc++.h>
using namespace std;
#define mod (int)1000000007
#define ll long long
void solve()
{
    ll n;
        cin>>n;
        ll arr[n];
        ll mn=0;
        map<ll,ll> mp;
        ll aa;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
            if(i==0)
                aa=arr[i];
            else
                aa&=arr[i];
        }
        mn=*min_element(arr,arr+n);
        if(mp[mn]<2 || aa!=mn)
        {
            cout<<0;
        }
        else
        {
            long long ans;
            ans=(mp[mn]%mod * (mp[mn]-1)%mod)%mod;
            for(ll i=1;i<=n-2;i++)
            {
                ans=(ans%mod * i%mod)%mod;
            }
            cout<<ans;
        }
 
        cout<<endl;
    
}
int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}