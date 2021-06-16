#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll c,m,x;
    cin>>c>>m>>x;
    ll sum=0;
    sum = c+m+x;
    ll mini=INT_MAX;
    mini = min(c,m);
    ll y= mini*3;
    if(y<=sum)
    {
        cout<<mini<<endl;
    }
    else
    {   

        ll f = (y-sum)/3;
        if((y-sum)%3==0)
        {
            cout<<mini-f<<endl;
        }
        else
        {
            cout<<mini-(f+1)<<endl;
        }
        

    }

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