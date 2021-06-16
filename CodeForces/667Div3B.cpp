#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    ll tmpa = a,tmpb=b;
    ll tmpn = n;
    if(tmpa-tmpn < x)
    {   
        tmpn-=(tmpa-x);
        tmpa = x;
        if(n>0)
        {
            if(tmpb - tmpn < y)
            {
                tmpb = y;
            }
            else
            {
                tmpb = tmpb - tmpn;
            }
            
        }
    }
    else
    {
        tmpa = tmpa - tmpn;
        
    }

    ll ans1 = tmpa*tmpb;
    tmpa = a,tmpb=b,tmpn=n;
    if(tmpb-tmpn < y)
    {
        tmpn-=(tmpb-y);
        tmpb=y;
        if(n>0)
        {   
            if(tmpa - tmpn < x)
            {
                tmpa = x;
            }
            else
            {
                tmpa = tmpa - tmpn;
            }
            
        }
    }
    else
    {
        tmpb=tmpb-tmpn;
    }
    
    ll ans2 = tmpa*tmpb;
    cout<<min(ans1,ans2)<<endl;
    
    

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