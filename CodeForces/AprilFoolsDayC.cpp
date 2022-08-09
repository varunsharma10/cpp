#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    for (int i = 0; i < s.size()-2; i++)
    {   
       int d= ((int) s[i]-64)+((int) s[i+1]-64);
       if(d>26)
       {
           d=d-26;
       }
        if( d!=(int)s[i+2]-64) 
        {
           int dif;
           dif=(d)-((int)s[i+2]-64);
           if(dif==1 || dif==-1)
           {
               continue;
           }
           else
           {
               cout<<"NO"<<endl;
               return;
           }
           
        }
        
    }
    cout<<"YES"<<endl;
}
int main()
{
    solve();
}