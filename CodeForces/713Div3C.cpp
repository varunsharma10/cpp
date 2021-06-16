#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int n=s.size();
    int zero=0,one=0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]=='?' && s[n-i-1]!='?')
        {   
            s[i]=s[n-i-1];
        }
        if(s[i]!='?' && s[n-i-1]=='?')
        {
            s[n-i-1]=s[i];
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            zero++;
        }
        else if(s[i]=='1')
        {
            one++;
        }
    }   
    //cout<<zero<<"0"<<one<<"1";
    a=a-zero;
    b=b-one;
   // cout<<a<<"a "<<b<<"b ";
    for(int i=0;i<n/2;i++)
    {
        if(s[i]=='?')
        {
            if(a>b)
            {
                s[i]='0';
                s[n-i-1]='0';
                a=a-2;
            }
            else
            {
                s[i]='1';
                s[n-i-1]='1';
                b=b-2;
            }
            
        }
    }
   if(n%2!=0)
   {
       if(s[n/2]=='?')
       {
           if(a>b)
           {
               s[n/2]='0';
               a--;
           }
           else
           {
               s[n/2]='1';
               b--;
           }
           
       }
   }
   int flag=1;
   if(a==0 && b==0)
   {
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        
   }
   else
   {
       cout<<-1<<endl;
   }
   //cout<<s<<" S"<<endl;
  
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