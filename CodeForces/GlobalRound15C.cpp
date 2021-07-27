#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n, k;
    cin >> n >> k;
    vector<bool> used(2 * n, false);
    vector<int> a(k), b(k);
    for (int i = 0; i < k; i++) 
    {
        cin >> a[i] >> b[i];
        --a[i]; --b[i];
        used[a[i]] = true;
        used[b[i]] = true;
    }
    vector<int>r;
    for(int i=0;i<2*n;i++)
    {
        if(!used[i])
        {
            r.push_back(i);
        }
    }
    int tmp = r.size();
    for(int i=0;i<tmp/2;i++)
    {
        a.push_back(r[i]);
        b.push_back(r[i+tmp/2]);
    }
    assert((int) a.size() == n);
    for(int i=0;i<n;i++)
    {
        if(a[i] > b[i])
        {
            swap(a[i],b[i]);
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            if(a[i] < a[j] && a[j] < b[i] && b[i] < b[j])
            {
                ans++;
            }
        }
    }
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