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
    vector<int>ans;
    vector<int>v1,v2;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            v1.push_back(arr[i]);
        }
        else
        {
            v2.push_back(arr[i]);
        }
        
    }       
    for(int i=0;i<v1.size();i++)
    {
        ans.push_back(v1[i]);
    }
    for(int j=0;j<v2.size();j++)
    {
        ans.push_back(v2[j]);
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            if(__gcd(ans[i] , 2*ans[j]) > 1)
            cnt++;
        }
    }
    cout<<cnt<<endl;
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