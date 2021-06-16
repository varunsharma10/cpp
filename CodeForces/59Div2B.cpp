#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int arr[100];
int n,k;
bool v[101];
bool check()
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=k)
        {
            return false;
        }
    }
    return true;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    while(!check())
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=k && v[arr[i]]==0)
            {   
                v[arr[i]]=1;
                arr[i]++;
            }
        }
        ans++;
        memset(v,0,sizeof(v));
    }
   cout<<ans<<endl;
}