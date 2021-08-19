#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    string s;
    int n;
    cin>>n;
    cin>>s;
    int i=0;
    string ans = s;
    while(s[i] == '?')
    {
        i++;
    }
    for(int j=i;j>0;j--)
    {
        if(s[j] == 'R')
        {
            s[j-1] = 'B';
        }
        else
        {
            s[j-1] = 'R';
        }
    }
    int k = n-1;
    while(s[k] == '?')
    {
        k--;
    }
    for(int j = k;j<n-1;j++)
    {
        if(s[j] == 'R' && s[j+1] == '?')
        {
            s[j+1] = 'B';
        }
        else if(s[j] == 'B' && s[j+1] == '?')
        {
            s[j+1] = 'R';
        }
    }

    for(int j = i+1;j<k;j++)
    {
        if(s[j-1] == 'R' && s[j] == '?')
        {
            s[j] = 'B';
        }
        else if(s[j-1] == 'B' && s[j] == '?')
        {
            s[j] = 'R';
        }
    }
    cout<<s<<endl;
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