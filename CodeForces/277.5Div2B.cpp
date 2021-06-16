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
    send help
    cout << setprecision(15) << fixed;
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }    
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    sort(arr,arr+n);
    sort(arr2,arr2+m);
    int result=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(abs(arr[i]-arr2[j])<=1)
            {
                arr2[j]=1000;
                result++;
                break;
            }
        }
    }
    cout<<result<<endl;
}