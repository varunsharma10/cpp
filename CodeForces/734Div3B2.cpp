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
    int k;
    cin>>k;
    int arr[n];
    vector<int>v;
    vector<int>freq(n+1);
    vector<int>ans(n);
    vector<vector<int>>occ(n+1,vector<int>());
    vector<int>tocolor;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
        occ[arr[i]].push_back(i);
    }       
    for(int i=1;i<=n;i++)
    {
        if(freq[i] >=k)
        {
            for(int j=0;j<k;j++)
            {
                ans[occ[i][j]] = j+1;
            }
        }
        else
        {
            for(int j=0;j<freq[i];j++)
            {
                tocolor.push_back(occ[i][j]);
            }
        }
    }
    int tmp = tocolor.size();
    for(int i=0;i<=tmp-k;i+=k)
    {
        for(int j=0;j<k;j++)
        {
            ans[tocolor[i+j]] = j+1;
        }
    }
    for(int i=0;i<n;i++)
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