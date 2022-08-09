#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>cnt(26);
    for(int i=0;i<n;i++)
    {
        cnt[s[i] - 'a']++;
    }       
    int pair = 0;
    int npair = 0;
    for(auto it : cnt)
    {
        pair += it/2;
        npair += it % 2;
    }
    int ans = 2 * (pair/k);
    npair += 2 * (pair % k);
    if(npair >=k)
        ans++;
    
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