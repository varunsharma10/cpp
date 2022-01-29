#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n,k;
    cin>>n>>k;
    if(n == 4 && k == 3)
        cout<<"-1"<<endl;
    else
    {
        int v[n/2][2];
        for(int i=0;i<n/2;i++)
        {
            v[i][0] = i;
            v[i][1] = n-i-1;
        }
        if(k == n-1)
        {
            swap(v[0][0] , v[1][1]);
            swap(v[1][1] , v[2][1]);
        }
        else
        {
            if(k < n/2)
            {
                swap(v[0][0] , v[k][0]);
            }
            else
            {
                k = n-k-1;
                swap(v[0][0] , v[k][1]);
            }
        }

        for(int i=0;i<n/2;i++)
        {
            cout<<v[i][0]<<" "<<v[i][1]<<endl;
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