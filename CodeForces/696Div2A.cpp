#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string b;
    int n;
    cin>>n;
    cin>>b;
    int a[n];
    a[0]=1;
    for (int i = 0; i < n; i++)
    {   
        a[i+1]=1;
        if(b[i] + a[i] == b[i+1] + a[i+1])
        {
            a[i+1]=0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    

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
