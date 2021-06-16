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
    int n,k;
    cin>>n>>k;
    for(int i = 0; i < n; i++){
            if (i > 0)
                cout<<" ";
            if (k > 0)
               cout<<2*i + 2<<" "<<2*i + 1;
            else
               cout<<2 * i + 1<<" "<<2 * i + 2;
            k--;
    }
}