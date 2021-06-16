#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    double k;
    cin>>k;
    string s;
    cin>>s;
    int ans=2;
    int last=0;
    int first=0;
    int dif=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='*')
        {   
            first=i+1;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='*')
        {
            last=i+1;
            break;
        }
    }
    if(first==last)
    {
        cout<<1<<endl;
        return;
    }
    else
    {
        dif=abs(first-last);
        double x=ceil(dif/k);
        double j=ceil(x/k);
        cout<<ans+x-j<<endl;
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