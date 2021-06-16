#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int m=0;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]==')')
        {
            count++;
        }
        else
        {   
            break;
        }
    }
    if((n-count) >= count)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
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
