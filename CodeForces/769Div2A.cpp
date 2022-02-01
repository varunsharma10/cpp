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
    string s;
    cin>>s;
    int count1 = 0;
    int count2 = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '0')
            count1++;
        else
            count2++;
    }
    if(s == "1" || s == "0" || s == "10" || s == "01")
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        cout<<"NO"<<endl;
        return;
    }
    if(count1 != count2 || (count1 == 1 && count2 == 1))
        cout<<"YES"<<endl;
    else
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