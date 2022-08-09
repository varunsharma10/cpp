#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    string a,b,c,d;
    int n1,n2,n3,n4;
    cin>>a>>b>>c>>d;
    n1=a.size()-2;
    n2=b.size()-2;
    n3=c.size()-2;
    n4=d.size()-2;
    int flag1=0;
    int flag2=0;
    string s="C";
    int k=max(n1,max(max(n3,n4),n2));
    int j=min(n1,min(min(n3,n4),n2));
    if(k==n1)
    {
        if(k>=2*n2 && k>=2*n3 && k>=2*n4)
        {
            s='A';
            flag1=1;
        }
    }
    else if(k==n2)
    {
        if(k>=2*n1 && k>=2*n3 && k>=2*n4)
        {
            s='B';
            flag1=1;
        }
    }
    else if (k==n3)
    {
        if(k>=2*n2 && k>=2*n1 && k>=2*n4)
        {
            s='C';
            flag1=1;
        }
    }
    else if(k==n4)
    {
        if(k>=2*n2 && k>=2*n1 && k>=2*n3)
        {
            s='D';
            flag1=1;
        }
    }
    if(j==n1)
    {
        if(j*2<=n2 && j*2<=n3 && j*2<=n4)
        {
            s='A';
            flag2=1;
        }
    }
    else if(j==n2)
    {
        if(j*2<=n1 && j*2<=n3 && j*2<=n4)
        {
            s='B';
            flag2=1;
        }
    }
    else if (j==n3)
    {
        if(j*2<=n2 && j*2<=n1 && j*2<=n4)
        {
            s='C';
            flag2=1;
        }
    }
    else if(j==n4)
    {
        if(j*2<=n2 && j*2<=n1 && j*2<=n1)
        {
            s='D';
            flag2=1;
        }
    }
    if((flag1==1 && flag2==1) || (flag1==0 && flag2==0))
    {
        cout<<"C"<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
    
    
}