#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i+=2)
    {
        if(s[i]=='a')
        {
            s[i]='b';
        }
        else
        {
            s[i]='a';
        }
        if(s[i+1] =='z')
        {
            s[i+1]='y';
        }
        else
        {
            s[i+1]='z';
        }
        
        
    }
    cout<<s;
    cout<<endl;

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