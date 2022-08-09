#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,l;
    cin>>n>>k>>l;
    int w,b;
    cin>>w>>b;
    int total=2*n;
    int white=k+l;
    int black=total-white;
    if(w<=white/2 && b<=black/2)
    {
        cout<<"YES"<<endl;
    }   
    else
    {
        cout<<"NO"<<endl;
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