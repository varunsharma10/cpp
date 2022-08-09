#include<bits/stdc++.h>
using namespace std;
int cnt[30];
int main()
{
    string s;
    cin>>s;
   
    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i]-'a']++;
    }

    int odd=0;
    for (int i = 0; i < 26; i++)
    {
        if(cnt[i]%2!=0)
        odd++;
    }
    if(odd==0 || (odd%2!=0))
    {
        cout<<"First"<<endl;
    }
    else
    {
        cout<<"Second"<<endl;
    }
    
    
    
}
