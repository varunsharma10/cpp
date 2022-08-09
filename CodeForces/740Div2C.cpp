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
    cin >> n;
    vector<vector<int>> v(n);
    int k;
    for(int i=0;i<n;i++)
    {
        cin >> k;
        int e;
        for(int j=0;j<k;j++)
        {
            cin >> e;
            v[i].push_back(e);
        }
    }
    vector<pair<int,int>> v1;
    for(int i=0;i<n;i++)
    {
        int k = v[i].size();
        int sp = v[i][0]+1;
        int ele = 1;
        for(int j=1;j<k;j++)
            {
                if(sp+ele>v[i][j])
                ele++;
                else
                {
                    sp = v[i][j] + 1 - ele;
                    ele++;
                }
            }
            v1.push_back({sp,k});
    }
    sort(v1.begin(),v1.end());
    ll l = 1;
    ll r = 1e9+1;
    int pans = -1;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        bool ans = true;
        int power = mid;
        for(int i=0;i<int(v1.size());i++)
        {
            if(power>=v1[i].first)
            {
                power+=v1[i].second;
            }
            else
            {
                ans=false;
                break;
            }
        }
        if(ans)
        {
            r = mid-1;
            pans = mid;
        }
        else
        {
            l = mid+1;
        }
    }
    cout << pans <<"\n";
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