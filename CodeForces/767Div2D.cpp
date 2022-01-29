#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
bool ispalin(string s)
{
    int n = s.size();
    for(int i=0;i<n/2;i++)
    {
        if(s[i] != s[n-i-1])
            return false;
    }
    return true;
}
void solve()
{    
    int n;
    cin>>n;
    set<string>s2,s3;
    bool ans = false;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(ans)
            continue;
        if(ispalin(s))
        {
            ans = 1;
            continue;
        }
        string rev = s;
        reverse(rev.begin(),rev.end());
        if(s.size() == 2)
        {
            if(s2.find(rev) != s2.end())
            {
                ans = 1;
                continue;
            }
            if(s3.find(rev) != s3.end())
            {
                ans = 1;
                continue;
            }
            s2.insert(s);
        }
        else if(s.size() == 3)
        {
            if(s3.find(rev) != s3.end())
            {
                ans = 1;
                continue;
            }
            if(s2.find(rev.substr(0,2)) != s2.end())
            {
                ans = 1;
                continue;
            }
            s3.insert(s.substr(0,2));
            s3.insert(s);
        }
    }
    if(ans == 1)
    {
        cout<<"YES"<<endl;
        return;
    }
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