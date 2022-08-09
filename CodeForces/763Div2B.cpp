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
    set<vector<int>>s;
    vector<vector<int>>ans,arr;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr.push_back({a,b});
        s.insert({a,b});
    }       
    for(int i=0;i<n;i++)
    {
        int tmp1 = arr[i][0];
        int tmp2 = arr[i][1];

        for(int i = tmp1;i<=tmp2;i++)
        {
            if((i == tmp1 || s.count({tmp1 , i-1}) ) &&( i == tmp2 || s.count({i+1 , tmp2}) ))
            {
                ans.push_back({tmp1,tmp2,i});
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<endl;
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
