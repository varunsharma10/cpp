#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,m,r,c;
    cin>>n>>m>>r>>c;
    r--;
    c--;
    vector<string>mat;
    for(int i=0;i<n;i++)
    {
        string tmp;
        cin>>tmp;
        mat.push_back(tmp);
    }
    bool ok = true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j] == 'B')
            {
                ok = false;
                break;
            }
        }
    }
    if(ok == true)
    {
        cout<<-1<<endl;
        return;
    }
    if(mat[r][c] == 'B')
    {
        cout<<0<<endl;
        return;
    }
    int ans = 0;
    for(int i=0;i<m;i++)
    {
        if(mat[r][i] == 'B')
        {
            cout<<1<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(mat[i][c] == 'B')
        {
            cout<<1<<endl;
            return;
        }
    }
    cout<<2<<endl;
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