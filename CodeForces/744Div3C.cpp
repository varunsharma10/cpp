#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n,m,d;
    cin>>n>>m>>d;
    vector<string > vec(n);
    for(ll i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    vector<vector<ll>>gridl(n,vector<ll>(m,0));
    vector<vector<ll>>gridr(n,vector<ll>(m,0));
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(vec[i][j]=='*')
            {
                if(i!=0&&j!=0)
                {
                    gridl[i][j]=1+gridl[i-1][j-1];
                }
                else{
                    gridl[i][j]=1;
                }
                if(i!=0&&j!=m-1)
                {
                    gridr[i][j]=1+gridr[i-1][j+1];
                }
                else{
                    gridr[i][j]=1;
                }
            }
            else{
                gridl[i][j]=0;
                gridr[i][j]=0;
            }
        }
    }
    vector<vector<ll>>grid(n,vector<ll>(m,0));
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(vec[i][j]=='*')
            {
                grid[i][j]=min(gridl[i][j],gridr[i][j]);
            }
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(grid[i][j]<=d)
            {
                grid[i][j]=0;
            }
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            ll temp=grid[i][j];
            for(ll k=0;k<temp;k++)
            {
                grid[i-k][j+k]=1;
                grid[i-k][j-k]=1;
            }
        }
    }
    ll can=1;
    for(ll i=0;i<n;i++)
    {
        
        for(ll j=0;j<m;j++)
        {
            if((grid[i][j]==1&&vec[i][j]=='*')||(grid[i][j]==0&&vec[i][j]=='.'))
            {
                ;
            }
            else{
                can=0;
            }
        }
    }
    if(can)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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