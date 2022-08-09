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
    ll sum=0;
    bool ok1 = false;
    bool ok2 = false;
    int count =0;
    for(int i=0;i<s.size();i++)
    {
        sum+=(s[i]-'0');
        if(s[i]%2 ==0 && s[i]!='0')
        {
            ok1 = true;
        }
        if(s[i] == '0')
        {
            count++;
            ok2 = true;
        }

    }       
    if(sum%3==0)
    {   
        if(ok1)
        {
            if(ok2)
            {
                cout<<"red"<<endl;
                return;
            }   
        }
        else
        {
            if(ok2 && count>1)
            {
                cout<<"red"<<endl;
                return;
            }
            
        }
        
    }
   cout<<"cyan"<<endl;
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