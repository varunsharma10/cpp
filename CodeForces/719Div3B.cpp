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
    cin>>s;
    ll ans=0;
   if(s.size()==1)
   {
       for(char a:s)
       {
           cout<<s;
       }    
       cout<<endl;
       return;
   }
    ans+=((s.size()-1)*9);
    bool ok =false;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]<s[i+1])
        {   
            ok =true;
            ans+=s[i]-'0';
            break;
        }
        else if(s[i]>s[i+1])
        {   
            ok =true;
            ans+=(s[i]-'0'-1);
            break;
        }
        else
        {
            continue;
        }
    }    
    if(!ok)
    {
        cout<<ans+s[0]-'0'<<endl;
    }
    else
    {
        cout<<ans<<endl;
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