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
    string a,b;
    for(int i=0;i<s.size();i++)
    {
        if(i%2==0)
            a+=s[i];
        else
            b+=s[i];
    }
    if (b.empty()) {
        cout << stoi(a) - 1<<endl; 
        return;
    }
    cout << (stoi(a) + 1) * (stoi(b) + 1) - 2<<endl;       
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