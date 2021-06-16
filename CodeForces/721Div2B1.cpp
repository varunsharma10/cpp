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
    string s;
    cin>>s;
    int zero=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            zero++;
        }
    }
    if(zero>2 && n%2!=0 && s[n/2]=='0')
    {   
        cout<<"ALICE"<<endl;
    }
    else
    {
        cout<<"BOB"<<endl;
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