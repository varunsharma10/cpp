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
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    if(arr[0] < b[0])
    {
        cout<<0<<endl;
        return;
    }
    int idx = INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(arr[0] > arr[i])
        {
            idx = i;
            break;
        }
    }
    int idx2 = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(b[i] > arr[idx])
        {
            idx2 = i;
            break;
        }
    }
    int idx3 = INT_MAX;
    int idx4 = INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(b[0] < b[i])
        {
            idx3 = i;
            break;
        }
    }
    // int idx2 = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] < b[idx3])
        {
            idx4 = i;
            break;
        }
    }
    // cout<<idx<<" "<<idx2<<" "<<idx3<<" "<<idx4<<endl;
    cout<<min((idx + idx2) , (idx3 + idx4))<<endl;


    // int idx1 = INT_MAX;
    // for(int i=1;i<n;i++)
    // {
    //     if(arr[i] < b[0])
    //     {
    //         idx1 = i;
    //         break;
    //     }
    // }
    // int idx2 = INT_MAX;
    // for(int i=1;i<n;i++)
    // {
    //     if(b[i] > arr[0])
    //     {
    //         idx2 = i;
    //         break;
    //     }
    // }
    // // cout<<min(idx1, idx2)<<endl;
    // int idx3 = INT_MAX;
    // for(int i=1;i<n;i++)
    // {
    //     if(arr[i] < b[i])
    //     {

    //     }
    // }
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