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
    string s;
    cin>>s;
    vector<int>r,b;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'R')
            r.push_back(arr[i]);
        else
            b.push_back(arr[i]);
    }
    sort(b.begin(),b.end());
    sort(r.rbegin(),r.rend());
    bool ok = true;
    for(int i=0;i<b.size();i++)
    {
        if(b[i] <=i)
            ok = false;
    }
    for(int i=0;i<r.size();i++)
    {
        if(r[i] > n -i)
            ok = false;
    }
    if(ok)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
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