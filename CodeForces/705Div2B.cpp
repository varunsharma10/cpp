#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
vector < int > go = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};
int inf = 1e9 + 7;
int get(int x)
{
    string tmp = to_string(x);
    if(tmp.size() == 1)
        tmp = "0" + tmp;
    
    string ans = "";
    for(int i=1;i>=0;i--)
    {
        if(go[tmp[i]-'0'] == -1)
            return inf;
        
        ans+= char(go[tmp[i] - '0'] + '0');
    }
    return stoi(ans);

}
string good(int x)
{
    string ans = to_string(x);
    if(x < 10)
    {
        ans = "0" + ans;
    }
    return ans;
}
void solve()
{    
    int h,m;
    cin>>h>>m;
    string s;
    cin>>s;
    int H = (s[0] - '0') * 10 + s[1] - '0';
    int M = (s[3] - '0') * 10 + s[4] - '0';

    while (1) 
    {
            if (M == m) 
            {
                H++, M = 0;
            }
            if (H == h) 
            {
                H = 0;
            }
            if (get(M) < h && get(H) < m) 
            {
                cout << good(H) << ":" << good(M) << '\n';
                break;
            }
            M++;
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