#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int n;
    cin>>n;
    map<int,int>mp;
    int home[n];
    int away[n];
    int ans[n];
    int ans2[n];
    for(int i=0;i<n;i++)
    {
        cin>>home[i]>>away[i];
    }
    for(int i=0;i<n;i++)
    {
        mp[home[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        ans[i]=n-1;
        ans[i]+=mp[away[i]];
        ans2[i]=2*(n-1) - ans[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" "<<ans2[i]<<endl;
    }
}