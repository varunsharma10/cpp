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
    int arr1[n+1];
    int arr2[m+1];
    for(int i=0;i<n+1;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<m+1;i++)
    {
        cin>>arr2[i];
    }
    if(n>m)
    {   
        if(arr1[0]*arr2[0]<0)
        {
            cout<<"-Infinity"<<endl;
            return 0;
        }
        else
        {
            cout<<"Infinity"<<endl;
            return 0;
        }
        
    }
    if(m>n)
    {
        cout<<"0/1"<<endl;
        return 0;
    }
    else
    {
        int x=abs(arr1[0]);
        int y=abs(arr2[0]);
        if(arr1[0]*arr2[0]<0)
        {
            cout<<"-"<<x/__gcd(x,y)<<"/"<<y/__gcd(x,y)<<endl;
            return 0;
        }
        else
        {
            cout<<x/__gcd(x,y)<<"/"<<y/__gcd(x,y)<<endl;
            return 0;
        }
        
        
    }
    
}