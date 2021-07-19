#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    string s;
    cin>>s;
    int one = 0;
    int zero = 0;
   for(int i=0;i<s.size();i++)
   {
       if(s[i] == '0'){
           zero++;
       }
       else
       {
           one++;
       }
   }
   int ans = min(one,zero);
   int pre0 =0,pre1=0;
   for(int i=0;i<s.size();i++)
   {
       if(s[i] == '0')
       {
           pre0++;
           zero--;
       }
       if(s[i] == '1')
       {
           pre1++;
           one--;
       }
       ans = min(ans,pre0 + one);
       ans = min(ans,pre1 + zero);
   }
   cout<<ans<<endl;
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