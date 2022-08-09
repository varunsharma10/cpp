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
    vector<int>v;
    priority_queue<int>q;
    for(int i=1;i<=n;i++)
    {
        q.push(i);
    }       
    cout<<2<<endl;
    for(int i=1;i<n;i++)
    {
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        int x = (a+b+1)/2;
        cout<<a<<" "<<b<<endl;
        q.push(x);
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