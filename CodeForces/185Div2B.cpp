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
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double p,q;
    p=a/b;
    q=(1-c/d)*(1-a/b);
    double ans=0;
    ans=p/(1-q);
    cout<<ans<<endl;
}