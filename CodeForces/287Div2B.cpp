#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
       
}
int main()
{   
    send help
    double r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    double a=x1-x;
    double b=y1-y;
    double d = (a*a)+(b*b);
    double c=sqrt(d);
    double ans=(int)ceil(c/(2*r));
    cout<<ans;
}