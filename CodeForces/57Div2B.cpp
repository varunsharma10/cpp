#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
string x,y,z;
char to_lowercase(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
 
    return c;
}
string f(string a)
{
    string x;
    for(char c :a)
    {
        if(c!='_' && c!='-' && c!=';')
        {   
            c = to_lowercase(c);
            x+=c;
        }
    }
    return x;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    string a,b,c;
    cin>>a>>b>>c;
    x=f(a);
    y=f(b);
    z=f(c);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string p;
        bool ok =false;
        cin>>p;
        string s=f(p);
        if(s==x+y+z || s==x+z+y || s==y+x+z || s==y+z+x || s==z+x+y || s==z+y+x)
        {
            ok=true;
        }
        else
        {
            ok=false;
        }
        if(ok)
        {
            cout<<"ACC"<<endl;
        }
        else
        {
            cout<<"WA"<<endl;
        }
        
        
        
    }
    
}