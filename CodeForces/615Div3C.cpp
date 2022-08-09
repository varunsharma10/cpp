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
    set<int>s;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0 && !s.count(i))
        {
            s.insert(i);
            n=n/i;
            break;
        }
    }       
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0 && !s.count(i))
        {
            s.insert(i);
            n=n/i;
            break;
        }
    }
    if(s.size() < 2 || s.count(n) || n==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    s.insert(n);
    for(auto it: s){

        cout<<it<<" ";
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