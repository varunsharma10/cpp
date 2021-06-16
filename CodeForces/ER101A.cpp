#include<bits/stdc++.h>
using namespace std;
void solve()
{   
    int a=0,b=0,c=0;
    string s;
    cin>>s;
    if(s[0]==')' || s[s.length()-1]=='(')
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='(')
            {
                a++;
            }
            if(s[i]==')')
            {
                b++;
            }
            if(s[i]=='?')
            {
                c++;
            }
            
        }
        if(a==b && c%2==0)
        {
            cout<<"YES"<<endl;
            return;
        }
        if(a>b && c%2!=0)
        {
            cout<<"YES"<<endl;
        }
        if(a<b && c%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
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
