#include <bits/stdc++.h>
#include<math.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
   ll A,B,n;
        cin>>A>>B>>n;
        vector<pair<ll,ll>>a(n);
        for(int i=0;i<n;i++) cin>>a[i].first;
        for(int i=0;i<n;i++) cin>>a[i].second;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(B<=0) {
                cout<<"NO"<<"\n";
                return;
            }
            ll k1=a[i].second/A;
            ll k2=a[i].second%A;
            ll k3=B/a[i].first;
            ll k4=B%a[i].first;
            if(k4) k3++;
            if(k2) k1++;
            k1=min(k1,k3);
            B-=k1*a[i].first;
            a[i].second-=k1*A;

        }
        if(a[n-1].second>0) cout<<"NO"<<"\n";
      
        else cout<<"YES"<<"\n";
    }
   
    

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     solve();
 }
}