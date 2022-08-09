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
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    if(arr[0]==1 || arr[m-1]==n)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<endl;
    for(int i=0;i<m-2;i++)
    {
        if(arr[i]==arr[i+1]-1 && arr[i+1]==arr[i+2]-1)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        
    }
    cout<<"YES"<<endl;
    return 0;
}