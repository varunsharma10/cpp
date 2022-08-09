#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ld ans;
void rec(ld c,ld m,ld p,ld v,ld steps,ld mul)
{
    if(c<0.000001)c=0;
    if(m<0.000001)m=0;

    if(c==0 && m==0)
    {
        ans+=steps*p*mul;
        return;
    }
    ans+=steps*p*mul;
    ld save1 = c, save2 = m, save3=p;
    ld div = 2.0;
    if(c!=0)
    {
        if(m!=0)
        {
            if(c<=v)
            {
                m+=c/div;
                p+=(c-c/div);
            }
            else
            {
                m+=v/div;
                p+=(v-v/div);
            }
        }
        else
        {
            if(c<=v)
            {
                p+=c;
            }
            else
            {
                p+=v;
            }
        }
        c=max((ld)0,c-v);
        rec(c,m,p,v,steps+1,mul*save1);
    }
    m = save2;
    c = save1;
    p = save3;

    if(m!=0)
    {
        if(c!=0)
        {
            if(m<=v)
            {
                c+=(m/div);
                p+=(m-m/div);
            }
            else
            {
                c+=(v/div);
                p+=(v-v/div);
            }
        }
        else
        {
            if(m<=v)
            {
                p+=m;
            }
            else
            {
                p+=v;
            }
        }
        m=max((ld)0,m-v);
        rec(c,m,p,v,steps+1,mul*save2);
    }
        
}
void solve()
{    
    ld c,m,p,v;
    cin>>c>>m>>p>>v;
    ans = 0;
    rec(c,m,p,v,1.0,1);
    cout<<ans<<endl;
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