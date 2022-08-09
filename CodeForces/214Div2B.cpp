#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main()
{   
   ll n,k;
   cin>>n>>k;
   ll arr[n];
   vector<ll>v;
   for(ll i=0;i<n;i++){
       cin>>arr[i];
   }
   ll ans;
   ll count=0;
    ll minn=INT_MAX;
   for(int i=0;i<k;i++){
       count=0;
       for(int j=i;j<n;j+=k)
       {
           count+=arr[j];
       }
      if(minn>count){
          minn=count;
          ans=i;
      }
   }
    cout<<ans+1<<endl;
    return 0;
}