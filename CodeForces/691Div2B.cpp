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
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<(n/2+1)*(n/2+1)<<endl;
    }
    else
    {
        cout<<2*(n/2+1)*(n/2+2)<<endl;
    }
    
}