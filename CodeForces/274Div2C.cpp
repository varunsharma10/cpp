#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    vector<pair<int,int>>vec;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }       
    sort(vec.begin(),vec.end());

    int best = -1;
    for(int i=0;i<n;i++)
    {
        if(best <= vec[i].second)
        {
            best = vec[i].second;
        }
        else{
            best = vec[i].first;
        }
    }
    cout<<best<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}