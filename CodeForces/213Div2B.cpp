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
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    if(n==2)
    {
        cout<<2<<endl;
        return 0;
    }
    int arr[n];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=2;
    int ans=0;;
    for(int i=2;i<n;i++)
    {      
        // cout<<i<<" ";
        if(arr[i]==arr[i-2]+arr[i-1])
        {   
            count++;
        }
        else
        {      
            count=2;
        }
        v.push_back(count);
        
    }
    int maxx=0;
    for(int i=0;i<v.size();i++)
    {
        maxx=max(maxx,v[i]);
    }
    cout<<maxx<<endl;
}