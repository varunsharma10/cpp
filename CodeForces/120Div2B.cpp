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
    double x1,y1,r1;
    double x2,y2,r2;
    cin>>x1>>y1>>r1;
    cin>>x2>>y2>>r2;
    double x;
    x=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    double ans=0;
    if(x>=r1+r2){
        ans=x-(r1+r2);
    }
    else if(x>=abs(r1-r2))
    {   
        ans=0;
    }
    else
    {
        ans=(abs(r1-r2)-x);
    }
    
    cout<<ans/2<<endl;
}