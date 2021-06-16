#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
map<char,int>mp;
void solve()
{    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=1;
    char a=s[0];
    for(int i=0;i<n;i++)
    {   
        count=1;
        for(int j=i+1;j<n;j++)
        {   
            if(count==0 && s[i]==s[j])
            {
                cout<<"NO"<<endl;
                return;
            }
            if(s[i]==s[j])
            {
                count=1;
            }
            else
            {
                count=0;
            }    
        }
        
    }   
    cout<<"YES"<<endl;   
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