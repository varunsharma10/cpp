#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int ans(int a)
{
    if(a>0)
    {
        return 1;
    }
    return 0;
    
}
void solve()
{    
    int n;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        
        if(!i)
        {   
            v.push_back(temp);
        }
        else
        {
             if(ans(temp)!=ans(v.back()))
            {
                v.push_back(temp);
            }
            else
            {
                if(temp>v.back())
                {
                    v.pop_back();
                    v.push_back(temp);
                }
            }
            
        }
        
    }    
    cout<<accumulate(v.begin(),v.end(),0ll)<<endl;
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