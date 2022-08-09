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
    string col = "RGB";
    int ans = INT_MAX;
    string res = "";
    vector<int>p(3);
    iota(p.begin() , p.end() , 0);

    do
    {
        int count = 0;
        string t;
        for(int i=0;i<n;i++)
        {
            t += col[p[i%3]];
            if(t[i] != s[i])
                count++;
        }
        if(ans > count)
        {
            ans = count;
            res = t;
        }
    }while(next_permutation(p.begin() , p.end()));

    cout<<ans<<endl<<res<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}