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
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }       
    int i =0;
    int j = n-1;
    deque<int> q;
    q.push_front(arr[0]);
    for(int i=1;i<n;i++)
    {
        if(q.front() > arr[i])
        {
            q.push_front(arr[i]);
        }
        else
        {
            q.push_back(arr[i]);
        }
    }
    for (auto it = q.begin(); it != q.end(); ++it) 
        cout << *it<<" ";

    cout << '\n'; 
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