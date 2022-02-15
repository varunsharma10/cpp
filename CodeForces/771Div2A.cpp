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
    int start = -1;
    int num = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != i+1)
        {
            start = i;
            break;
        }
    }
    int end = -1;
    for(int i=start;i<n;i++)
    {
        if(arr[i] == start+1)
        {
            end  = i;
            break;
        }
    }
    // cout<<start<<" "<<end<<" "<<endl;
    reverse(arr + start , arr+end+1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
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