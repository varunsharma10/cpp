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
    double l,d,v,g,r;
    cin>>l>>d>>v>>g>>r;
    double t1,t2;
    t1=d/v;
    t2=(l-d)/v;
    double ans;
    int k = d/(v* (g+r));
    if(d < ((k *(r+g) + g)*v) )
    ans+=t1;
    else
    ans+=(k+1) * (r+g);

    ans+=t2;

    cout<<ans<<endl;

}