#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cset[3000005];
void solve()
{
    ll n,w;
    cin>>n>>w;
    ll x;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        cset[x]++;
    }
    ll ans=0;
    ll cnt=0;
   while(n>0)
   {
       cnt=w;
       for(ll i = (1 << 20) ; i>0; i >>=1)
       {
           while(cset[i]>0 && cnt>=i)
           {
               cset[i]--;
               n--;
               cnt-=i;
           }
       }
       ans++;
   }
   cout<<ans<<endl;
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