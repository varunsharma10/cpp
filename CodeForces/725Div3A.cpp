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
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mini = min(arr[i], mini);
        maxi = max(arr[i], maxi);
    }   
    int index1,index2;
    int tmp1,tmp2;
    for(int i=0;i<n;i++)
    {
        if(arr[i]== mini)
        {
            index1 =i;
            tmp1=i;
        }
        if(arr[i] == maxi)
        {
            index2 = i;
            tmp2=i;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i] == mini)
        {
            index1 = min(index1 , i);
            tmp1 = min(tmp1 , i);
        }
        if(arr[i] == maxi)
        {
            index2 = min(index2 , i);
            tmp2 = min(tmp2 , i);
        }
    }
    index1++;
    index2++;
    tmp1++;
    tmp2++;
    if(index1 > n/2)
    {
        index1 = (n+1)-index1;
    }
    if(index2 > n/2){
        index2 = (n+1)-index2;
    }
    int x = min(index1,index2);
    int ans = 0;
    ans+=x;
    ans+=min(max(index1,index2), abs(tmp1-tmp2));
    cout<<ans<<endl;
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