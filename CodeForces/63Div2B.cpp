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
    int n,m;
    cin>>n>>m;
    int l[m],r[m],t[m],c[m];
    for(int i=0;i<m;i++){
        cin>>l[i]>>r[i]>>t[i]>>c[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int k=0;
        bool ok =false;
        for(int j=0;j<m;j++)
        {
            if(l[j]<=i && r[j]>=i)
            {   
                ok=true;
                if(t[j]<mini)
                {
                    mini=t[j];
                    k=j;
                }
            }
        }
        if(ok)
        {
            ans+=c[k];
        }
    }
    cout<<ans<<endl;
}