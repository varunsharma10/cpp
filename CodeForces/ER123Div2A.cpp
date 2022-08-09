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
    int r = 0;
    int g = 0;
    int b = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'r')
        {
            r = 1;
        }
        else if(s[i] == 'b')
        {
            b = 1;
        }
        else if(s[i] == 'g')
        {
            g = 1;
        }
        else if(s[i] == 'R' && r == 0)
        {
            cout<<"NO"<<endl;
            return;
        }
        else if(s[i] == 'G' && g == 0)
        {
            cout<<"NO"<<endl;
            return;
        }
        else if(s[i] == 'B' && b == 0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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