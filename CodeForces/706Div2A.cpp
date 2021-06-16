#include <bits/stdc++.h>
using namespace std;
char s2[100];
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    else if(2*k+1 > n)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {   string a="",b="";
       for(int i=0;i<k;i++)
       {
           a+=s[i];
       }
       for(int i=n-1;i>=n-k;i--)
       {
          b+=s[i];
       }
      if(a==b)
      {
          cout<<"YES"<<endl;
          return;
      }
    }
    cout<<"NO"<<endl;
    return;
    
    
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