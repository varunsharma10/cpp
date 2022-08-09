#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int k,n,m;
    cin>>k>>n>>m;
    int a[n];
    int b[m];
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }       
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    bool ok = true;
    int tmp = k;
    int curr;
    int i=0,j=0;
    while(true)
    {
        if(i<n && a[i]<=tmp)
        {
            if(a[i] == 0)
            {
                tmp++;
            }
            ans.push_back(a[i]);
            i++;
        }
        else if(j<m && b[j] <=tmp)
        {
            if(b[j] == 0)
            {
                tmp++;
                
            }
            ans.push_back(b[j]);
            j++;
        }
        else
        {
            break;
        }
    }
    if(i<n || j<m)
    {
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
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