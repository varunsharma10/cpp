#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{ 
    if(a.first==b.first){
        return (a.second<b.second);
    } 
    return (a.first < b.first);

} 
void solve()
{    
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    vector<int>a,b;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        a.push_back(x);
        b.push_back(y);
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),sortbysec);
    pair<int, int> cur = make_pair(0, 0);
    	string ans;
    	bool ok = true;
    	for (int i = 0; i < n; ++i) {
    		int r = v[i].first - cur.first;
    		int u = v[i].second - cur.second;
    		if (r < 0 || u < 0) {
    			cout << "NO" << endl;
    			ok = false;
    			break;
    		}
    		ans += string(r, 'R');
    		ans += string(u, 'U');
    		cur = v[i];
        }
        if(ok)
        {
            cout<<"YES"<<endl;
            cout<<ans<<endl;
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