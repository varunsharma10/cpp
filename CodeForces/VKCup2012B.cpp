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
    ll n;
    cin>>n;
    ll arr[n];
    ll one=0;
    ll two=0;
    ll three=0;
    ll four=0;
    vector<int>f;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        one++;
        if(arr[i]==2)
        two++;
        if(arr[i]==3)
        three++;
        if(arr[i]==4)
        four++;
    }
    ll sum=0;
    ll ans=0;
    ans+=four;
    four=0;
    ans+=three;
    one=max(0ll,one-three);
    ans+=(two>>1);
    one+=((two&1)<<1);
    ans+=((one+3)>>2);

    cout<<ans<<endl;
}