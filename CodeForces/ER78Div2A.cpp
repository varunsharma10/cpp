#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    string p,h;
    cin>>p>>h;
    vector<int>cntp(26);
    for(int i=0;i<p.size();i++)
    {
        ++cntp[p[i]-'a'];
    }
    for(int i=0;i<h.size();i++){
        vector<int>cnth(26);
        for(int j=i;j<h.size();j++)
        {
            ++cnth[h[j]-'a'];
            if(cntp == cnth)
            {
                cout<<"YES"<<endl;
                return;
            }
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