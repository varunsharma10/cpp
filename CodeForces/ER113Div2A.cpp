#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
bool cal(string s)
{
    int a = 0;
    int b = 0 ;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'a')
            a++;
        else
            b++;
    }
    return (a == b);
}
void solve()
{    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a = 0,b = 0;
    for(int i=0;i<s.size();i++)
    {
        for(int j = 1;j<=n-i;j++)
        {
            string tmp = s.substr(i,j);
            if(cal(tmp))
            {
                cout<<i+1<<" "<<i+j<<endl;
                return;
            }
        }
    }
    cout<<-1<<" "<<-1<<endl;
    return;
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