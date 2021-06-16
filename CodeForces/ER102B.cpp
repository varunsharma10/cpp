#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size() == s2.size())
    {
        if(s1==s2) 
        {
            cout<<s1<<endl;
            return;
        }
        else
        {
            cout<<-1<<endl;
            return;
        }
        
    }
    string ans="";
    if(s1.size() > s2.size()) swap(s1,s2);
    int n = s1.size();
    int m = s2.size();
    int l = (n*m)/__gcd(n,m);
    int k=0;
    for (int i = 0; i < l; i++)
    {
        ans = ans + s1[k];
        k++;
        k=k%n;
    }
    k=0;
    for (int i = 0; i < l; i++)
    {
        if(ans[i] != s2[k])
        {
            cout<<-1<<endl;
            return;
        }
        k++;
        k=k%m;
    }
    cout<<ans<<endl;
    
    

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
