#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int ans[10001];
void solve()
{   
    int k;
    cin>>k;
    cout<<ans[k-1]<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t;
    int j = 0;
   
    for(int i=1;i<=10000;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        if(i%3!=0)
        {
            string s = to_string(i);
            if(s[s.size()-1] == '3')
            {
                continue;
            }
            else
            {
                ans[j] = i;
                j++;
            }
        }
    }
    cin>>t;
    while(t--)
    {
        solve();
    }
}