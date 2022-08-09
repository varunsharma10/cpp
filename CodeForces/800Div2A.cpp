#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int a,b;
    cin>>a>>b;
    bool ok = false;
    vector<char>ans(a+b);
    int i=0;
    int count = 0;
    int minn = min(a,b);
    while(count < minn)
    {
        ans[i] = '0';
        i+=2;
        count++;
    }
    count = 0;
    int j = 1;
    while(count < minn)
    {
        ans[j] = '1';
        j+=2;
        count++;
    }
    if(ans[(2*minn) - 1] == '1')
        j--;
    if(a > b)
    {
        while(i < a+b)
        {
            ans[i] = '0';
            i++;
        }
    }
    else if(a < b)
    {
        while(j < a+b)
        {
            ans[j] = '1';
            j++;
        }
    }
    for(auto it : ans)
    {
        cout<<it;
    }
    cout<<endl;

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