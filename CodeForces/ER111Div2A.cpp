#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int s;
    cin>>s;
    int ans=0;
    int i=1;
    int count=0;
   while(true)
   {
       ans+=i;
       i+=2;
       count++;
       if(ans >= s)
       {
           break;
       }
   }
   cout<<count<<endl;
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