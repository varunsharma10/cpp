#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }       
    int count[n];
    memset(count,0,sizeof(count));
    for(int i=0;i<m;i++)
    {
       count[arr[i]-1]++;
    }
    for (int i = n - 1; i > 0; --i) 
    {
		count[i - 1] += count[i];
	}
    vector<int>ans(26);
    for(int i=0;i<n;i++)
    {
       ans[s[i]-'a'] +=count[i]+1;
    }
    for(int i=0;i<26;i++)
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