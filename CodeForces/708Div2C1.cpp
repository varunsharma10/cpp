#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll j;
    j=n/2;
    if(n%2==0)
    {
        if(j%2==0)
        {
        cout<<j<<" "<<j/2<<" "<<j/2<<endl;
        }
        else if(j%2!=0 && j!=1)
        {
         j--;
         cout<<n-2*j<<" "<<j<<" "<<j<<endl;
         }
    }
    else
    {
        cout<<1<<" "<<j<<" "<<j<<" "<<endl;
    }
    
    
    
    
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