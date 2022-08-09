#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int check(vector<int>arr)
{
    int n = arr.size();
    int count = 0;
    for(int i=2;i<n;i++)
    {
        if((arr[i-2] + arr[i-1]) == arr[i])
        {
            count++;
        }
    }
    return count;
}
void solve()
{    
    int n;
    cin>>n;
    list<int> arr{};
    for(int i=n;i>=1;i--)
    {
        arr.push_back(i);
    }
    int count = 0;
    if(n == 3)
    {
        cout<<3<<" "<<2<<" "<<1<<endl;
        cout<<1<<" "<<3<<" "<<2<<endl;
        cout<<3<<" "<<1<<" "<<2<<endl;
        return;
    }
    int k = n;
    while(k--)
    {
        for(auto it : arr)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        int tmp = arr.front();
        arr.pop_front();
        arr.push_back(tmp);
    }
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