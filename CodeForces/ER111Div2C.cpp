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
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    int ans =n + (n-1);
    for(int i=0;i<n-2;i++)
    {
        if((arr[i]<=arr[i+1] and arr[i+1]<=arr[i+2]) or (arr[i]>=arr[i+1] and arr[i+1]>=arr[i+2]))
        {
            continue;
        }
        else
        {
            ans++;
        }
    }
    for(int i=0;i<n-3;i++)
    {
        if((arr[i]<=arr[i+1] && arr[i+1]<=arr[i+2]) || (arr[i]>=arr[i+1] and arr[i+1]>=arr[i+2]))
        {
            continue;
        }
        else if((arr[i+1]<=arr[i+2] && arr[i+2]<=arr[i+3]) || (arr[i+1]>=arr[i+2] and arr[i+2]>=arr[i+3]))
        {
            continue;
        }
        else if((arr[i]<=arr[i+1] && arr[i+1]<=arr[i+3]) || (arr[i]>=arr[i+1] and arr[i+1]>=arr[i+3]))
        {
            continue;
        }
        else if((arr[i]<=arr[i+2] && arr[i+2]<=arr[i+3]) || (arr[i]>=arr[i+2] and arr[i+2]>=arr[i+3]))
        {
            continue;
        }
        else
        {
            ans++;
        }
    }
    cout<<ans;
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