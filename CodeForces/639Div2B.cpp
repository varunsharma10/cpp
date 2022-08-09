#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n;
    cin>>n;
    int ans =0;
    for(int i=1;i<sqrt(n),n>=2;i++)
    {
        int a = ((3*i*i)+i)/2;
        if(a>n)
        {
            n-=((3*(i-1)*(i-1) + i)/2);
            ans++;
            i =1; 
        }
    }
    cout<<ans<<endl;
    

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