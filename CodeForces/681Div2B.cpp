#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    vector<pair<int,int>>v;
    for(int i=0;i<s.size();i++)
    {
        int curr = i;
        if(s[i] == '1')
        {
            while(s[i] == '1')
            {
                i++;
            }
            v.push_back(make_pair(curr,i));
        }
    }    
    int ans = 0;
    for(int i=1;i<v.size();i++)
    {
        if((v[i].first - v[i-1].second)*b < a)
        {
            ans+=(v[i].first - v[i-1].second)*b;
        }
        else
        {
            ans+=a;
        }
    }   
    if(v.size()==0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<ans+a<<endl;
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