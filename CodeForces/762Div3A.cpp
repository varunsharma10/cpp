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
    int n = s.size();
    if(n % 2 != 0)
    {
        cout<<"NO"<<endl;
        return;
    }   
    string s1,s2;    
    for(int i=0;i<n/2;i++)
    {
        s1+=s[i];
    }
    for(int i=n/2;i<n;i++)
    {
        s2+=s[i];
    }
    if(s1 == s2)
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