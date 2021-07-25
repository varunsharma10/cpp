#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n; 
    cin>>n;
    if(n==1)
    {
        cout<<1<<" "<<0<<endl;
        return;
    }
    if(n==2)
    {
        cout<<0<<" "<<1<<endl;
        return;
    }
    int tmp = n/3;
    int k = n%3;
    if(k == 0)
    {
        cout<<tmp<<" "<<tmp<<endl;
    }
    if(k==1)
    {
        cout<<tmp+1<<" "<<tmp<<endl;
    }
    if(k==2)
    {
        cout<<tmp<<" "<<tmp+1<<endl;
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