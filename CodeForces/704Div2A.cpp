#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long p,a,b,c;
    cin>>p>>a>>b>>c;    
    if(p%a==0 || p%b==0 || p%c==0)
    {
        cout<<0<<endl;
    }
    else
    {
        long long tmp1,tmp2,tmp3;
        tmp1 = p/a;
        tmp2 = p/b;
        tmp3 = p/c;
        tmp1++;
        tmp2++;
        tmp3++;
        long long dif1,dif2,dif3;
        dif1 = tmp1*a - p;
        dif2 = tmp2*b - p;
        dif3 = tmp3*c - p;
        cout<<min(dif1,min(dif2,dif3))<<endl;

    }
    
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}