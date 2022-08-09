#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=0;
    int b=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '0' && a<7 && b<7)
        {
            b=0;
            a++;
        }
        if(s[i] == '1' && a<7 && b<7)
        {
            a=0;
            b++;
        }
    }
    if(a==7 || b==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
}
