#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,m,k;
    cin>>n>>m>>k;
    if(m==0)
    {
        cout<<0<<endl;
        return;
    }       
    int x = n/k;
    int a = min(x,m);
    m-=a;
    --k;
    double b = ceil((double)m/(double)k);
    cout<<(int)(a-b)<<endl; 
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