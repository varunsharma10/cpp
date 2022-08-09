#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        v.push_back(s.substr(0,i+1));
    }
    for(int i=0;i<n;i++)
    {
        string s = v[i];
        while(s.size() < k)
        {
            s+=s;
        }
        s = s.substr(0,k);
        v[i] = s;
    }
    string min = v[0];
    for(int i=1;i<n;i++)
    {
        if(min > v[i])
        {
            min = v[i];
        }
    }
    cout<<min<<endl;
}

int main()
{
    send help
    ll t = 1;
    while (t--)
    {
        solve();
    }
}