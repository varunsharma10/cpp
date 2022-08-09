#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int n;
vector <int> a;

bool solve()
{
    cin >> n;
    a.resize(n);
    for(auto &i : a) cin >> i;
    ll sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        sum += a[i];
        if(sum <= 0) 
        return 0;
    }
    sum = 0;
    for(int i = n - 1 ; i >= 0 ; i--){
        sum += a[i];
        if(sum <= 0) 
        return 0;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        if(solve()) cout << "YES\n";
        else cout << "NO\n";
    }
}