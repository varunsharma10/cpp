#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int count=0;
    int total = 0;
    if(b>=0)
    {
        for(int i=0;i<n;i++)
        {
            count+=(a+b);
        }
        cout<<count<<endl;
        return;
    }
    else
    {   
        int res = 0;
        if(s[0] == '0')
        {
            for(int i=1;i<n;i++)
            {
                res = 0;
                if(s[i] == '1')
                {   
    
                    while(s[i] == '1')
                    {
                        res++;
                        total++;
                        i++;
                    }
                    count+= (res*a) + b;
                }    
            }
            count+=(n-total) * a +b;
            cout<<count<<endl;
            return;
        }
        else
        {   
            int res = 0;
            for(int i=1;i<n;i++)
            {   
                res =0;
                if(s[i] == '0')
                {
                    while(s[i] == '0')
                    {
                        res++;
                        total++;
                        i++;
                    }
                    count+=(res*a)+b;
                }
            }
            count+=(n-total) * a+b;
            cout<<count<<endl;
            return;
        }
        
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