#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll n;
    cin>>n;
    ll x;
    cin>>x;
    ll sum=0;
    for(int i=1;i<n;i++)
    {
        int y;
        cin>>y;
        if(x>y)sum+=x-y;
        x=y;
    }
    cout<<sum<<endl;
}