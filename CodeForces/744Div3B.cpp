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
    ll arr[n];
    ll b[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        b[i] = arr[i];
    }
    vector<vector<ll>>ans;
    int j = 0;
    sort(b, b+n);
    int i=0;
    while(i<n)
    {

        if(arr[i]==b[i])
        {
            i++;
        }
        else
        {
            for(j=i; j<n; j++)
            {
                if(b[i]==arr[j]){
                    break;
                }
            }
            ll tmp = arr[i];
            arr[i]=b[i];
            ll size = j-i;
            vector<ll>v;
            v.push_back(i+1);
            v.push_back(j+1);
            v.push_back(size);
            ans.push_back(v);
            for(ll k=i+1; k<=j; k++)
            {
                ll tmp2 = arr[k];
                arr[k] = tmp; 
                tmp = tmp2;
            }
            i++;
        }
    }
    cout<<ans.size()<<endl;
    for(i=0; i<ans.size(); i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }  
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // cout<<endl;
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