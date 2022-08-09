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
    if(n == 2)
    {
        cout<<0<<endl;
        return;
    }
    int one = 0;
    int zero = 0;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '0')
            zero++;
        else
            one++;
    }   
    if(zero == one)
    {
        cout<<one-1<<endl;
        return;
    }
    // if(zero == 0 || one == 0)
    //     cout<<0<<endl;

    cout<<min(zero , one)<<endl;  

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