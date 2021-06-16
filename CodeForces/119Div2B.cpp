#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int w,h;
    cin>>w>>h;
    ll wyn=0;
    for(int i=1;i<w;i++)
    for(int j=1;j<h;j++)
    wyn+=min(i,w-i)*min(j,h-j);
    cout<<wyn;
}