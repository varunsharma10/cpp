#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int q,d;
    cin>>q>>d;
    
    for(int i = 0; i < q; i++)
    {   
    int flag=0;
      int x;
      cin>>x;
    if(x>=10*d)
        {
            flag=1;
        }
    if(flag==0)
    {
        while(x>=d)
        {
            if(x%d==0)
            {
                flag=1;
                break;
            }
            x=x-10;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
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
