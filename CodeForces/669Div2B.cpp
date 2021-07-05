#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int vis[10000];
void solve()
{    
    int n;
    cin>>n;
    int arr[n];
    int maxx = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i] > arr[maxx])
        {
            maxx = i;
        }
    }

   vector<int>ans(n);
   ans[0] = arr[maxx];
   int tmp = ans[0];
   arr[maxx] = 0;
   for(int i=1;i<n;i++)
   {    
       int a=0,b=0;
       for(int j=0;j<n;j++)
       {
           if(arr[j] && __gcd(arr[j],tmp) > b)
           {
               b = __gcd(arr[j],tmp);
               a = j;
           }
       }
       ans[i] = arr[a];
       tmp = b;
       arr[a] = 0;
   }
   for(int i=0;i<ans.size();i++)
   {
       cout<<ans[i]<<" ";
   }
   cout<<endl;
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