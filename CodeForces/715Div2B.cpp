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
    int k;
    cin>>k;
    cin>>s;
    int m=0;
    int n=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='M')
        {
            m++;
        }
        if(s[i]=='T')
        {
            n++;
        }
    } 
    if(m*2!=n)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
    m=0,n=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='M')
        {
            m++;
            if(m>n)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        if(s[i]=='T')
        {
            n++;
        }
    } 
    m=0,n=0;   
    for(int i=k-1;i>=0;i--)
    {
        if(s[i]=='M')
        {
            m++;
            if(m>n)
            {
                cout<<"NO"<<endl;
                return;
            }

        }
        if(s[i]=='T')
        {
            n++;
        }
    }  
    cout<<"YES"<<endl;
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