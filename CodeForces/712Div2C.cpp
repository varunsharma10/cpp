#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;   
    string a="",b="";
    int c1=1,c0=0;
    int zero=0,one=0;
     if(s[0]=='0' || s[n-1]=='0')
    {
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            one++;
        }
        else
        {
            zero++;
        }
    }
    if(one%2!=0 || zero%2!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
   
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {   
        if(s[i]=='1')
        {
            if(c1<=one/2)
            {   
                a+='(';
                b+='(';
            }
            else
            {
                a+=')';
                b+=')';
            }
            c1++;
        }
        else
        {   
            if(c0==0)
            {
                a+='(';
                b+=')';
            }
            else
            {
                a+=')';
                b+='(';
            }
            c0 ^= 1;

        }
        
        
    }
    cout<<a<<endl<<b<<endl;
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