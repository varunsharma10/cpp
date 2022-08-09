#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int left(string s, string t, int i, int x)
{
    while (x < t.length() && i >= 0)
    {
        if (t[x] == s[i])
        {
            x++;
            i--;
        }
        else
        {
            break;
        }
    }
    if (x == t.length())
    {
        return 1;
    }
    return 0;
}
 
int right(string s, string t, int i, int x)
{
    if (x == t.length())
    {
        return 1;
    }
    if (x + 1 == t.length())
    {
        if (i + 1 < s.length() && s[i + 1] == t[x])
        {
            return 1;
        }
        else if (i - 1 >= 0 && s[i - 1] == t[x])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
 
    int r1 = 0, r2 = 0;
    if (i - 1 >= 0 && s[i - 1] == t[x])
    {
        r1 = left(s, t, i - 1, x);
    }
    if (r1)
    {
        return 1;
    }
    if (i + 1 < s.length() && s[i + 1] == t[x])
    {
        r2 = right(s, t, i + 1, x + 1);
    }
 
    return (r1 || r2);
}
void solve()
{    
    string a,b;
    cin>>a>>b;
    int n = a.size();
    int f = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == b[0])
        {
           f = right(a,b,i,1);
           if(f==1){
               break;
           }
        }
    }    
    if(f)
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