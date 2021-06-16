#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,u,r,d,l;
    cin>>n>>u>>r>>d>>l;
    int cnt_u=u;
    int cnt_l=l;
	int cnt_d=d;
	int cnt_r=r;
	bool poss=true;
    if(u==n)
    {
        cnt_r--;
        cnt_l--;
    }       
    else if(u==n-1)
    {
        if(cnt_r>cnt_l)
        cnt_r--;
        else
        cnt_l--;
    }
    if(d==n)
    {
        cnt_r--;
        cnt_l--;
    }
    else if(d==n-1)
    {
        if(cnt_r>cnt_l)
        cnt_r--;
        else
        cnt_l--;
    }
    if(cnt_r<0 || cnt_l<0)
    {
        poss = false;
    }
    if(r==n)
    {
        cnt_d--;
        cnt_u--;
    }
    else if(r==n-1)
    {
        if(cnt_d>cnt_u)
        cnt_d--;
        else
        cnt_u--;
    }
    if(l==n)
    {
        cnt_d--;
        cnt_u--;
    }
    else if(l==n-1)
    {
        if(cnt_d>cnt_u)
        cnt_d--;
        else
        cnt_u--;
    }
    if(cnt_d<0 || cnt_u<0)
    {
        poss = false;
    }
    if(poss)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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