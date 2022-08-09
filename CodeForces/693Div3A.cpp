#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int w,h,n;
    int num=1;
    cin>>w>>h>>n;
     if(n==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(w%2!=0 && h%2!=0 && n > 1)
    {
        cout<<"NO"<<endl;
        return;
    }
   
    else
    {   
        while(w%2==0 || h%2==0)
        {
            if(w%2==0)
            {
                w=w/2;
                num=num*2;
                
            }
            if(h%2==0)
            {
                h=h/2;
                num=num*2;
                
            }
        }
    }
    
    if(num>=n)
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        cout<<"NO"<<endl;
        return;
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
