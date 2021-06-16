#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long a,b,count,ans=1e18;
    cin>>a>>b;
    for (long long i = 0; i*i <= a; i++)
    {
        if(b==1 && i==0)
        continue;
        count=i;
        long long c=a;
        while(c)
        {
            c=c/(b+i);
            count++;
        }
        ans=min(ans,count);
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