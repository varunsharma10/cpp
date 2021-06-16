#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x,y,z;
    x=sqrt((a*c)/b);
    y= sqrt((b*a)/c);
    z= sqrt((c*b)/a);
    cout<<4*(x+y+z);
}
