#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    char mat[8][8];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>mat[i][j];
        }
    }       
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(mat[i][j] == '#')
            {
                if(i-1 >=0 && j-1 >=0 && i+1 < 8 && j+1 < 8)
                {
                    if(mat[i-1][j-1] == '#' && mat[i-1][j+1] == '#' && mat[i+1][j-1] == '#' && mat[i+1][j+1] == '#')
                    {
                        cout<<i+1<<" "<<j+1<<endl;
                        break;
                    }
                }
            }
        }
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