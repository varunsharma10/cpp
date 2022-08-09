#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int red=0,blue=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            red++;  
        }
        
        if(a[i]<b[i])
        {
            blue++;
        }
        
    }
    if(red>blue)
    {
        cout<<"RED"<<endl;
    }
    if(blue>red)
    {
        cout<<"BLUE"<<endl;
    }
    if(blue==red)
    {
        cout<<"EQUAL"<<endl;
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
