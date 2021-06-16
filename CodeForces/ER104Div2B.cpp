#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    k--;
    if(n%2==0)
    {
        cout<<k%n+1<<endl;
    }
    else
    {
        int pre=(n-1)/2;
        int conflicts=k/pre;
        cout<<(k+conflicts)%n+1<<endl;
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