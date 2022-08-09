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
    int arr[n];
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        v.push_back(max(arr[i],arr[i+1]));
    }
    int ans=INT_MAX;
    for(int i=0;i<v.size();i++)
    {
        ans=min(ans,v[i]);
    }
    if(ans>min(arr[0],arr[n-1]))
    {
        cout<<min(arr[0],arr[n-1]);
    }
    else
    cout<<ans<<endl;
    
}