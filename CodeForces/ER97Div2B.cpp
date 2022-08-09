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
    string s;
    cin>>s;
    ll ans1=0;
    ll ans2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1' && s[i+1]== '0')
        {
            ans1++;
            i++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0' && s[i+1]== '1')
        {
            ans2++;
            i++;
        }
    }

    cout<<n/2 - max(ans1,ans2)<<endl;
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