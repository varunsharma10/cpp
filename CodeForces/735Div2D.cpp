#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"a"<<endl;
        return;
    }   
    string tmp = "b";    
    if(n%2==1)
    {
        tmp+="c";
    }
    n/=2;
    for(int i=0;i<n;i++)
    {
        cout<<"a";
    }
    cout<<tmp;
    for(int i=0;i<n-1;i++)
    {
        cout<<"a";
    }
    cout<<endl;
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