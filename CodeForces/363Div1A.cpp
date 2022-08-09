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
    int rest = 0;
    if(arr[0] == 0)
    {
        rest++;
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i] == 3)
        {
            if(arr[i-1] == 1)
            {
                arr[i] = 2;
            }
            else if(arr[i-1] == 2)
            {
                arr[i] = 1;
            }
        }
        else if(arr[i] == 2)
        {
            if(arr[i-1] == 2)
            {
                arr[i] = 0;
                rest++;
            }
        }
        else if(arr[i] == 1)
        {
            if(arr[i-1] == 1)
            {
                arr[i] = 0;
                rest++;
            }
        }
        else if(arr[i] == 0)
        {
            rest++;
        }
    }
    cout<<rest<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}