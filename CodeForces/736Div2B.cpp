#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int zeroa = 0;
    int onea  = 0;
    int oneb = 0;
    int zerob = 0;
    for(auto c : a)
    {
        if(c == '0')
        {
            zeroa++;
        }
        else
        {
            onea++;
        }
    }
    for(auto c : b)
    {
        if(c == '0')
        {
            zerob++;
        }
        else
        {
            oneb++;
        }
    }
    int ans = 0;
    if(onea == 0)
    {
        cout<<oneb<<endl;
        return;
    }
    if(oneb == 0)
    {
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
       if(b[i] == '1' && a[i] == '0')
       {    
           a[i] = '2';
           ans++;
       }
       else if(b[i] == '1' && i!=0)
       {    
            if(a[i-1] == '1')
           {    
               a[i-1] = '2';
               ans++;
           }
           else if((a[i-1] == '0' || a[i-1] == '2') && a[i+1] == '1')
           {
               a[i+1] = '2';
               ans++;

           }
       }
       else if(b[i] == '1' && i==0)
       {    
           if(a[i+1] == '1')
           {
               a[i+1] = '2';
               ans++;
           }
       }
    }
    cout<<ans<<endl;

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