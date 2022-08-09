#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string ans;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y')
        {
            continue;
        }
        else
        {
            ans+=".";
            ans+=towlower(s[i]);
        }
        
    }
    cout<<ans;
}
