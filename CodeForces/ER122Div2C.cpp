#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll hc,dc,hm,dm;
    cin>>hc>>dc>>hm>>dm;
    ll k;
    cin>>k;
    ll w,a;
    cin>>w>>a;
    for(int i=0;i<=k;i++)
    {
        ll tmp1 = (hc + a*i);

        ll tmp2 = (dc + w*(k -i));

        ll tmp3 = tmp1/dm;
        if(tmp1 % dm != 0)
            tmp3++;
        
        ll tmp4 = hm/tmp2;
        if(hm%tmp2 != 0)
            tmp4++;

        // cout<<tmp3<<" "<<tmp4<<endl;
        if(tmp3 >= tmp4)
        {
            cout<<"YES"<<endl;
            return;
        }
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