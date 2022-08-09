#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int arr[102];
int n;
void ans(int l , int r , vector<int> &edge, int curr=0)
{   
    if(l>r)
    {
        return;
    }
    if(l==r)
    {
        edge[l]==curr;
    }
    int m = l;
    for(int i=l+1; i<=r; i++)
    {
        if(arr[m] < arr[i])
        {
            m = i;
        }
    }
    edge[m] = curr;
    ans(l, m - 1,edge, curr + 1);
    ans(m + 1, r,edge, curr + 1);

}
void solve()
{    
    cin>>n;
    int mx=INT_MIN;
    int indx=0;
    vector<int>edge(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }       

    ans(indx , n-1 , edge);
    for(auto x : edge){
        cout<<x<<" ";
    }
    cout<<endl;

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