
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,sum=0,max1=0,max2=0;
    cin>>n;
    int r[n];
    for (int i = 0; i < n; i++)
    {
        cin>>r[i];
    }
    cin>>m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+r[i];
        max1=max(max1,sum);
    }
    sum=0;
    for(int i=0;i<m;i++)
    {
       sum=sum+b[i];
       max2=max(max2,sum);
        
    }
    cout<<max1+max2<<endl;

    
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}
