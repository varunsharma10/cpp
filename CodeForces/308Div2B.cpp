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
    ll n;
    cin>>n;
    ll tmp = n;
    ll x=0;
    while(tmp)
    {
        tmp/=10;
        x++;
    }
    ll sum=1;
    ll ans = x*n + x -1;
    for(int i=0;i<x-1;i++)
    {
        sum*=10;
        ans-=sum;
    }
    cout<<ans<<endl;

}