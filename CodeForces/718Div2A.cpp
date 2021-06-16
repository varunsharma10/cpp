#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int countDigit(ll n) {
  return floor(log10(n) + 1);
}
void solve()
{    
    ll n;
    cin>>n;
    vector<ll>v;
    v.push_back(2050);
    v.push_back(20500);
    v.push_back(205000);
    v.push_back(2050000);
    v.push_back(20500000);
    v.push_back(205000000);
    v.push_back(2050000000);
    v.push_back(20500000000);
    v.push_back(205000000000);
    v.push_back(2050000000000);
    v.push_back(20500000000000);
    v.push_back(205000000000000);
    v.push_back(2050000000000000);
    v.push_back(20500000000000000);
    v.push_back(205000000000000000);
    ll x=0;
    x=countDigit(n);
    ll count=0;
        if(x<=3)
        {
            cout<<"-1"<<endl;
            return;
        }
        while(x>3)
        {
           if(v[x-4]>n || x==19)
           {
               n=n-v[x-4-1];
               count++;
               x=countDigit(n);
           }
           else
           {
               n=n-v[x-4];
               count++;
               x=countDigit(n);
           }
           
           
        }
        if(n==0)
        {
            cout<<count<<endl;
            return;
        }
        else
        {
            cout<<-1<<endl;
            return;
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