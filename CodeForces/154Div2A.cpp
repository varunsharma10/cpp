#include<bits/stdc++.h>
using namespace std;
int main()
{   
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin>>n>>m;
    if(n>=m)
    {
        int k=m;
        int d=(n-m);
        while(k--)
        {
            cout<<'B'<<'G';
        }
        while(d--)
        {
            cout<<'B';
        }
    }
    if(n<m)
    {
        int l=n;
        int a=(m-n);
        while(l--)
        {
            cout<<'G'<<'B';
        }
        while(a--)
        {
            cout<<'G';
        }
    }
}
