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
    ll arr[n];
    ll one=0;
    ll zero=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            one++;
        }
        else
        zero++;
    }
    if(one<=n/2)
    {
        cout<<n-one<<endl;
        for(int i=0;i<n-one;i++)
        {
            cout<<0<<" ";
        }
        cout<<endl;
    }
    else if(zero < n/2)
    {
        if(one%2!=0)
        {
            cout<<n - zero -1 <<endl;
            for(int i=0;i<n-zero-1;i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<n - zero<<endl;
            for(int i=0;i<n-zero;i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
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