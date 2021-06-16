#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int x1,y1,z1;
    cin>>x1>>y1>>z1;
    int x2,y2,z2;
    cin>>x2>>y2>>z2;
    int sum=0;
    sum+=2*(min(z1,y2));
    z1-=min(z1,y2);
    z2-=min(z2,x1);
    if(z1>0)
    {
        z2-= (min(z2,z1));
    }
    if(z2>0)
    {
        sum-=2*(min(z2,y1));
    }
    cout<<sum<<endl;

}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}