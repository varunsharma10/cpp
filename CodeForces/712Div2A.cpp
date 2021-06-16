#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(string s)
{
    int l = 0;
    int h = s.length()-1;
    while(h > l){
        if(s[l++] != s[h--]){
            return false;
        }
    }
   return true;

}
void solve()
{
    string s;
    cin>>s;
    int ans=0;
    string final="";
    if(ispalindrome(s))
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='a')
            {   
                ans=1;
                break;
            }
        }
        if(ans==1)
        {
            cout<<"YES"<<endl;
            cout<<s<<"a"<<endl;
            return;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
        
    }
    else
    {
        final='a'+s;
        if(ispalindrome(final))
        {
            cout<<"YES"<<endl;
            cout<<s<<'a'<<endl;
            return;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<final<<endl;
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