#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int x = 0;
    int y = 0;
    int L= 0, R = 0 , U = 0, D = 0;
    vector<int>ans;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'R')
        {
            x++;
            if(x > R)
            {
                if(R - L >= m-1)
                    break;
                R = x;
            }
        }
        else if(s[i] == 'L')
        {
            x--;
            if(x < L)
            {
                if(R - L >= m-1)
                    break;
                L = x;
            }
        }
        else if(s[i] == 'U')
        {
            y--;
            if(y < U)
            {
                if(D - U >= n-1)
                    break;
                
                U = y;
            }
        }
        else
        {
            y++;
            if(y > D)
            {
                if(D - U >= n-1)
                    break;
                
                D = y;
            }
        }
    }
    cout<<1-U<<" "<<1-L<<" "<<endl;
        

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