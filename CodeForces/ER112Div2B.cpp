#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int W,H;
    cin>>W>>H;
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int w,h;
    cin>>w>>h;
    int total = W*H;
    int area2 = w*h;
    int x = (x2-x1);
    int y = (y2-y1);
    int ans = INT_MAX;
    if(x + w <=W)
    {
        ans = min(ans,max(0,w-x1));
        ans = min(ans,max(0,x2-(W-w)));
    }
    if (y + h <= H) {
		ans = min(ans, max(0, h - y1));
		ans = min(ans, max(0, y2 - (H - h)));
	}
	if (ans == INT_MAX)
	    cout << -1 << endl;
    else
    {
        cout<<(double)ans<<endl;
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