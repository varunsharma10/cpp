#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void fun(int i , vector<int>& arr)
{
    if(i%2 != 0)
    {
        for(int i=1;i<arr.size()-1;i+=2)
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
    }
    else
    {
        for(int i=0;i<arr.size()-1;i+=2)
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
    }
}
void solve()
{    
    int n;
    cin>>n;
    vector<int>arr(n);
    int i = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>s = arr;
    sort(s.begin(),s.end());
    while(s != arr)
    {
        fun(i,arr);
        i++;
    }
    cout<<i<<endl;
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