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
    int a[n+2],b[n+2];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }       
     vector<int>diff(n+2,0);
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        diff[i] = b[i] - a[i];
    } 
    ll count = 0;
    for(int i=0;i<diff.size()-1;i++)
    {
        if(diff[i]<0)
        {
            cout<<"NO"<<endl;
            return;
        }
        if(diff[i] != diff[i+1])
        {
            count++;
        }
        
    }
    if(count<=2)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

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