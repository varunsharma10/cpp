#include <bits/stdc++.h>
using namespace std;
void solve()
{   
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int zero=0,one=0;
    if(a==b)
    {
        cout<<"YES"<<endl;
        return;
    }   
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        int c1=1;
        bool changed=false;
        for(int i=n-1;i>=0 && c1==1;i--)
        {
           if((a[i]!=b[i] && !changed) || (a[i]==b[i] && changed))
           {  
               if(zero==one)
               {
                   
                   changed=!changed;
               }
               else
               {
                   c1=0;
                   break;
               }
           }
           if(a[i]=='1')
           {
               one--;
           }
           else
           {
               zero--;
           }
           
           
        }
        if(c1==1)
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