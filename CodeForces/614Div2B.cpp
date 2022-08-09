#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    double n;
    cin>>n;
    double sum =0;
    for(int i=1;i<=n;i++)
    {
        sum+=((double)1/i);
    }
    cout<<sum<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    solve();
    
}