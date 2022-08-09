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
    int k;
    cin>>k;
    ll arr[n];
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
       v.push_back(make_pair(arr[i],i));
    }      
    sort(v.begin(),v.end());
    int count = 0;
    for(int i=1;i<n;i++)
    {
        if(v[i].second - v[i-1].second !=1)
        {
            count++;
        }
    }
    count++;
    if(k>=count)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
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