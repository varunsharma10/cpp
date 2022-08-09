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
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    } 
    bool w1 = false;
    bool w2 = false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]!='.')
            {
                if(arr[i][j] == 'W' == (i+j)%2==0)
                {
                    w1 = true;
                }
                else
                {
                    w2 = true;
                }
            }
        }
    }
    if(w1 && w2)
    {
        cout<<"NO"<<endl;
        return;
    }          
    else
    {
        cout<<"YES"<<endl;
        if(w1)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if((i+j)%2==0)
                    {
                        cout<<"W";
                    }
                    else
                    {
                        cout<<"R";
                    }
                    
                }
                cout<<endl;
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if((i+j)%2!=0)
                    {
                        cout<<"W";
                    }
                    else
                    {
                        cout<<"R";
                    }
                    
                }
                cout<<endl;
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