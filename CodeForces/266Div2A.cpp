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
    double n,m,a,b;
    cin>>n>>m>>a>>b;
    double k=0;
    k=b/m;
    int ans=0;
    int ans2=0;
    if(k>=a)
    {   
        ans=a*n;
        cout<<ans<<endl;
    }    
    else
    {
        if((int)n%(int)m==0)
        {
            int x=n/m;
            cout<<x*(int)b<<endl;
        }
        else
        {
            int y=n/m;
            ans=y*b;
            n=n-(y*m);
            ans2=(y+1)*b;
            ans+=n*a;
            cout<<min(ans,ans2)<<endl;
        }
        
    }
    
}