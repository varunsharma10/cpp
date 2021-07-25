#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,m,k;
    cin>>n>>m>>k;
    if(n%2==0 && m%2==0)
    {
        if(k%2==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }       
    else if(n%2==0 && m%2!=0)
    {
        int left = n*m/2 - k;
        if(left >= n/2 && (left - n/2)%2 == 0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    else if(n%2!=0 && m%2==0)
    {
        int left = k;
        swap(n,m);
        if(left >= n/2 && (left-n/2)%2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
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