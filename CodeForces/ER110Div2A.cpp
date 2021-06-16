#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{   
    int arr[4];
    int b[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
        b[i] = arr[i];
    }
    sort(b,b+4);
    if(b[3] == arr[0] && b[2]==arr[1])
    {
        cout<<"NO"<<endl;
    }
    else if(b[2] == arr[0] && b[3] == arr[1])
    {
        cout<<"NO"<<endl;
    }
    else if(b[2] == arr[2] && b[3] == arr[3])
    {
        cout<<"NO"<<endl;
    }
    else if(b[2] == arr[3] && b[3] == arr[2])
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
    
    
           
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