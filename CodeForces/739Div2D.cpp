#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
const ll m = (ll)2e18;
vector<string>v;

int solve(string s,string r)
{    
    int i = 0;
    int j = 0;
    int count = 0;
    while(i < s.size() && j< r.size())
    {
        if(s[i] == r[j]){
            j++;
            count++;
        }
        i++;
    }
    return (int)(s.size()) - count+(int)(r.size())-count;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    for(ll i=1;i<=m;i*=2)
    {
        v.push_back(to_string(i));
    }
    ll t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        int ans = n.size()+1;
        for(auto i : v)
        {   
            ans = min(ans , solve(n,i));
        }
        cout<<ans<<endl;
    }
}