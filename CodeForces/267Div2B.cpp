#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define setbits(x) __builtin_popcountll(x)
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int n,m,k;
    cin>>n>>m>>k;
    int arr[m+1];
    for(int i=0;i<m+1;i++)
    {
        cin>>arr[i];
    }
    int value=arr[m];
    int ans=0;
    for(int i=0;i<m;i++)
    {
        if(setbits(value^arr[i])<=k)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    
}