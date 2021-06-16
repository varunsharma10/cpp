#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    int count=0;
    cin>>s;
        for (int i = 1; i < s.size(); i++)
        {
            if(s[i]==s[i-1])
            {
                s[i] = '@';
                count++;
            }
            else
            {
                if(i>1 && s[i]==s[i-2])
                {
                    count++;
                    s[i]='@';
                    
                }
            }
            
        }
        cout<<count<<endl;
        
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
