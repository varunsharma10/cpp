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
    int p = 0, c = 0;
	bool fl = true;
    for(int i=0;i<n;i++)
    {
		int x, y;
        cin>>x>>y;
		if (x < p || y < c || y - c > x - p)
			fl = false;
			p = x, c = y;

		
    }      
    if(fl==true)
    {
        cout<<"YES"<<endl;
    } 
    else
    {
        cout<<"NO"<<endl;
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