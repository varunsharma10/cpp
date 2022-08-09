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
    ll n,m;
    cin>>n>>m;
    int l[n];
    int r[n];
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
        if(l[i]>r[i])
        {
            swap(l[i],r[i]);
        }
    }
    
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,l[i]);
        mini=min(mini,r[i]);
    }
    if(maxi>mini)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(maxi<=m && mini>=m)
    {
        cout<<0<<endl;
        return 0;
    }
    int ans=min(abs(maxi-m),abs(mini-m));
    cout<<ans<<endl;
    return 0;
}