#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
       
}
int main()
{   
    int n,m;
    cin>>n>>m;
    int arr[n];
    int arr2[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    int x=n;
    if(n>m)
    {
        x=m;
    }
    for(int i=x;i>=0;i--)
    {
        bool ok=true;
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr2[m-i+j])
            {
                ok =false;
            }
        }
        if(ok){
        cout<<n-i<<endl;
        return 0;
    }
    }
    
}